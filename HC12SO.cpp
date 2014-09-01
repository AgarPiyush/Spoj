// AC , ALGO : Combinatorics, Modular Multiplicative Inverse.

/* Idea :
1. Sort the array of n Cards.
2. The highest valued cards appears ( n - 1 ) C ( k - 1 ) times, the next higher valued card appears ( n - 2 ) C ( k - 1 )
times, and so on till n - i = k - 1. Therefore the desired sum is sum of ( product of this frequency & the value of a card )
for all the cards.
3. nCk values tend to get very large & standard data types can't hold them, therefore we'll use Modular Multiplicative Inverse.
*/

/* Some Helpful Links :

http://digital-madness.in/blog/2013/fast-io-in-c/
http://en.wikipedia.org/wiki/Exponentiation_by_squaring
http://www.programminglogic.com/fast-exponentiation-algorithms/
http://discuss.codechef.com/questions/4442/cntways-editorial
http://en.wikipedia.org/wiki/Modular_multiplicative_inverse
http://apps.topcoder.com/forums/?module=Thread&threadID=670443&start=0&mc=9#1221719

*/

// For any clarifications, contact me at : osinha6792@gmail.com

#include <cstdio>
#include <algorithm>

#define get getchar_unlocked
#define MOD 1000000007
#define MAX 10010

using namespace std ;

typedef long long i64 ;


// This Function computes a ^ ( MOD - 2 ) % MOD by using the concept of Exponentiation by Squaring

inline i64 pow( i64 a )
{
        i64 x = 1 , y = a , b = MOD - 2 ;

        while( b )
        {
                if( b & 1 )
                        x = ( x * y ) % MOD ;
                y = ( y * y ) % MOD ;
                b >>= 1 ;
        }

        return x % MOD ;
}

// This Function computes ( a * b ) % MOD by using the concept of Modulus Multiplication

inline i64 mulmod( i64 a , i64 b )
{
        i64 x = 0 , y = a % MOD ;
        while( b )
        {
                if( b & 1 )
                        x = ( x + y ) % MOD ;
                y = ( y * 2 ) % MOD ;
                b >>= 1 ;
        }
        return x % MOD ;
}

// This Function is for Fast Input


int main( )
{
        i64 fact[MAX] , i , n , k , t , cs = 1 , N , K , ans , now , term ;

        fact[0] = fact[1] = 1 ;
        for( i = 2 ; i < MAX ; i++ )
                fact[i] = mulmod( fact[i-1] , i ) ;
		scanf("%lld",&t);
        for( ;cs <= t ; cs++)
        {
             
             scanf("%lld",&n);scanf("%lld",&k);

                i64 a[n] ;

                for( i = 0 ; i < n ; i++ )scanf("%lld",&a[i]);

                sort( a , a + n ) ;

                for( ans = 0 , i = N = n - 1 , K = k - 1 ; N >= K ; N-- , i-- )
                {
                        a[i] %= MOD ;
                        now = mulmod( fact[N-K] , fact[K] ) ;
                        printf("now ini%lld\n",now);
                        now = pow( now ) ;
                        printf("now fin %lld\n",now);
                        term = mulmod( mulmod( fact[N] , now ) , a[i] ) ;
                        printf("\nterm %lld %lld %lld %lld\n",fact[N],now,a[i],term);
                        ans = ( ans + term % MOD ) % MOD;
                        printf("done \n\n");
                }
                
                printf("Case #%lld: %lld\n",cs,ans) ;
        }

        return 0 ;
}
