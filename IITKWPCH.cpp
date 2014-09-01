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

int main()
{
	ll t,n,i,j,k,l,h[10005];
	inp(t);
	while(t--)
	{
		int b[10000]={0};
		inp(n);
		ll p;
		for(p=0;p<n;p++)
		{
			j=0;
			inp(k);
			
			while(k>0)
			{
				int rem=k%10;
				b[rem]=1;
				k=k/10;
			}
			ll a=1,s=0;
			for(i=0;i<=9;i++)
			{
				s=s+b[i]*a;
				a=a*2;
				b[i]=0;
			}
			h[s]++;
	//		printf("%lld\n",s);
		}
		
		ll sum=0;
		for(i=1;i<=1024;i++)
		{
			sum+=(h[i]*(h[i]-1))/2;
			for(j=i+1;j<=1024;j++)
			{
				if(i&j)
				{
					sum+=h[i]*h[j];
				}
			}
			h[i]=0;
		}
		printf("%lld\n",sum);
		
		
	}
	return 0;
}

