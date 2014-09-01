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
/*inline void finp(ll *a )
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
}*/
ll i,j,k,l,m,n,t;
ll pow(ll b,ll e,ll p)
{
	ll x=1;
	while(e>0)
	{
		if(e&1)
			x=(x*b)%p;
		b=(b*b)%p;
		e=e/2;
	}
	return x;
}
int main()
{

	inp1(t);
	while(t--)
	{
		ll p;
		inp2(n,p);
		if(n>=p)
			printf("0\n");
		else
		{
			ll ans=1;
			for(i=p-1;i>n;i--)
				ans=(ans*i)%p;
			
			//printf("ans ini is %lld\n",ans);
			k=pow(ans,p-2,p);
			printf("%lld\n",p-k);			
		}
		
	}	
	return 0;
}

