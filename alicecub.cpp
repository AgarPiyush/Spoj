

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
ll i,j,k,l,m,n,a[1000005];
vector<ll> b[20];
int main()
{
   b[1].pb(9);b[1].bp(2);b[1].pb(3);b[1].pb(5);
   b[2].pb(1);b[2].bp(10);b[2].pb(4);b[2].pb(6);
   b[3].pb(1);b[3].bp(7);b[3].pb(11);b[3].pb(4);
   b[4].pb(3);b[4].bp(12);b[4].pb(2);b[4].pb(8);
   b[5].pb(1);b[5].bp(13);b[5].pb(7);b[5].pb(6);
   b[6].pb(5);b[6].bp(8);b[6].pb(14);b[6].pb(2);
   b[7].pb(15);b[7].bp(8);b[7].pb(5);b[7].pb(3);
   b[8].pb(16);b[8].bp(6);b[8].pb(7);b[8].pb(4);
   b[9].pb(10);b[9].bp(1);b[9].pb(11);b[9].pb(13);
   b[10].pb(2);b[10].bp(9);b[10].pb(12);b[10].pb(14);
   b[11].pb(9);b[11].bp(3);b[11].pb(12);b[11].pb(15);
   b[12].pb(4);b[12].bp(11);b[12].pb(10);b[12].pb(16);
   b[13].pb(5);b[13].bp(15);b[13].pb(9);b[13].pb(14);
   b[14].pb(6);b[14].bp(13);b[14].pb(16);b[14].pb(10);
   b[15].pb(16);b[15].bp(13);b[15].pb(7);b[15].pb(11);
   b[16].pb(15);b[16].bp(8);b[16].pb(12);b[16].pb(14);
   
   ll a[10000],b[]={1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0};
   a[255]=0;
   queue<ll> q; 
   q.push(8);q.push(10);q.push(11);q,push(12);q.push(13);
   q.push(9);q.push(14);q.push(15);q.push(16);
   while(!q.empty())
   {
        ll p=q.front();
        for(int i=0;i<4;i++)
        {

        }
   }






   return 0;
}

 
 


