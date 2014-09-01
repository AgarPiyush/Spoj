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
ll a[1000005],i,j,k;
int main()
{
	for(i=1;i<=1000;i++)
		a[i]=i*i;
	for(i=1;i<=100;i++)
	{
		int c=0;
		for(j=1;j<=1000;j++)
		{
			int flag=0;
			for(k=1;k<1000;k++)
			{
				if(a[k]==a[i]+a[j])
				{
					flag=1;break;
				}
				if(a[k]>a[i]+a[j])
					break;
			}
			if(flag)
			{
				c++;
			
			}
		}
		printf("%lld ",c);
	}
	return 0;
}

