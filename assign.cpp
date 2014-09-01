

//Author : Piyush Agarwal
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define inp1(a) scanf("%lld",&a);
#define outl(a) printf("%lld\n",a);
#define out(a) printf("%lld ",a);
#define line printf("\n");
#define FOR(i,b,e) for(i=b;i<=e;i++)
#define mp make_pair
#define pb push_back
#define inp2(a,b) scanf("%lld %lld",&a,&b)
#define getcx getchar_unlocked
 
inline void finp(ll *a )
{
	ll n=0; int ch = getcx(); int sign = 1;
	while(ch < '0' || ch > '9')
	{
	if(ch == '-') sign=-1; ch = getcx();
	}
	while(ch >= '0' && ch <= '9')
	{
	n = (n << 3) + (n << 1) + ch - '0', ch = getcx();
	}
	*a = n * sign;
}
ll power(ll b,ll e)
{
	ll x=1;
	while(e>0)
	{
		if(e&1)
			x=x*b;
		b=b*b;
		e=e/2;
	}
	return x;
}  
ll gcd(ll a,ll b)
{
    if(b==0)
          return a;
    return gcd(b,a%b);
}
ll i,j,k,l,m,n,a[25][25];
void recur(ll i,ll mark[])
{
    if(i==1)
    {
        for(ll j=1;j<=n;j++)

    }
}
int main()
{
    ll t;
    inp1(t);
    while(t--)
    {
        inp1(n);
        for(i=1;i<=n;i++)
        {
            ll c=0;
            for(j=1;j<n;j++)
            {
                inp1(a[i][j]);
                if(a[i][j]) c++;
            }
            a[i][0]=c;
        }
    }
    ll mark[50]={0};
    recur(1,mark);

   return 0;
}

 
 


