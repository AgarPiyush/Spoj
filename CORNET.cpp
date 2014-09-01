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
ll i,j,k,l,m,n,a[1000000];
ll sum[100000]={0};
	
void unionF(ll j,ll k)
{
	a[j]=k;
}
ll par=0;
ll find(ll k)
{
	//printf("k is %lld \n",k);
	if(a[k]==k)
	{
		par=k;
		return 0;
	}
	ll p=find(a[k]);
	if(sum[k]>0)
	{
		a[k]=par;
		sum[k]=sum[k]+p;
		return sum[k];
	}
	sum[k]=p+abs(a[k]-k)%1000;
	a[k]=par;
	
	//printf("here at end %lld return %lld diff %lld\n",k,p,sum[k]-p);
	return sum[k];
}

int main()
{
	ll t;
	finp(&t);
	while(t--)
	{
		finp(&n);
		for(i=0;i<=n;i++)
		{
			a[i]=i;sum[i]=0;
		}
		getchar();
		char c;
		scanf("%c",&c);
		par=0;
		while(c!='O')
		{
			if(c=='E')
			{
				finp(&k);
				ll ans=find(k);
				printf("%lld\n",ans);
			}
			else if(c=='I')
			{
				finp(&j);finp(&k);
				unionF(j,k);
			}
			getchar();
			scanf("%c",&c);
		}
	}
		
	return 0;
}

