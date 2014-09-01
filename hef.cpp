//Author: Piyush Agarwal, MNNIT Allahabad
#include<bits/stdc++.h>
using namespace std;
#define inp1(a) scanf("%lld",&a)
#define inp2(a,b) scanf("%lld %lld",&a,&b)
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define getcx getchar_unlocked
     /*
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
     */
   
 
ll i,j,k,l,m,n,t,a[1000005],b[1000005],ans[100005],fact[10000005];
ll p(ll b,ll e)
{
	ll x=1;
	while(e>0)
	{
		if(e&1)
		x=(x*b)%mod;
		
		b=(b*b)%mod;
		e=e/2;
	}
	return x;
}
int main()
{
	fact[1]=1;
	for(i=2;i<=1000000;i++)
		fact[i]=(fact[i-1]*i)%mod;
	a[2]=1;
	for(i=3;i<=2000;i=i+2)
	{
		if(a[i]==0)
		{
			for(j=2;j*i<=1000000;j++)
			{
				a[i*j]=1;
			}
		}
	}
	ll c=0;
	b[c++]=2;
	for(i=3;i<1000000;i=i+2)
	if(a[i]==0)
		b[c++]=i;
	ans[0]=8;
	for(i=1;i<c;i++)
	{
		ll mw=p(fact[b[i]-1],mod-2);
		mw=(mw*mw)%mod;
		ll q=(b[i]*b[i])%mod;
		ll w=fact[2*(b[i]-1)];
		ans[i]=(ans[i-1]+(q*w*mw)%mod)%mod;
	}
	inp1(t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<c;i++)
		if(b[i]>n)
			break;
		if(i==0)
			printf("0\n");
		else 
			printf("%lld\n",ans[i-1]);
	}
	
	return 0;
}


