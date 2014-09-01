#include<iostream>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<cmath>
#include<queue>
using namespace std;
#define inp(a) scanf("%lld",&a)
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define swap(a,b) {a=a+b;a=a-b;b=a-b;}
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define ll long long int
#define mod 1000000007
#define getcx getchar_unlocked
/*inline void fscan(ll *a )
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

ll mul(ll a1,ll b1)
{
	ll pro=0;
	b1=b1%mod;
	while(a1)
	{
		if(a1&1)
		{
			pro=pro+=b1;
			if(pro>mod) pro=pro-mod;
		}
		a1>>=1;
		b1<<=1;
		if(b1>mod)
		b1=b1-mod;
	}
	return pro;
}

ll mul2(ll b,ll e)
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

ll t,i,j,k,l,fact[100000];
int main()
{
	fact[0]=1;
	fact[1]=1;
	for(i=2;i<=10000;i++)
	fact[i]=(fact[i-1]*i)%mod;
	inp(t);
	while(t--)
	{
		ll n;
		inp(n);
		inp(k);
		if(n==0||k==0||k>n)
		{
			printf("-1\n");
		}
		else
		{
			n=n-1;
			k=k-1;
			ll pro=n,ans=1;
		//	out(fact[n-k]);
		//	out(fact[k]);
			
			pro=mul(fact[n-k],fact[k]);
			//out(pro);
			ans=mul(fact[n],mul2(pro,mod-2))%mod;
			out(ans);
			
		}
	}
	return 0;
}

