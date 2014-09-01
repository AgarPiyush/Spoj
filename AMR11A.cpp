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
ll i,j,k,l,m,n,t,a[600][600],b[600][600],d[600][600],r,c;
int main()
{
	inp(t);
	while(t--)
	{
		inp(r);inp(c);
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				inp(a[i][j]);
		b[0][0]=a[0][0];
		for(i=1;i<r;i++)
			b[i][0]=b[i-1][0]+a[i][0];
		for(i=1;i<c;i++)
			b[0][i]=a[0][i]+b[0][i-1];
			
		for(i=1;i<r;i++)
		{
			for(j=1;j<c;j++)
			{
				if(b[i-1][j]>b[i][j-1])
					b[i][j]=b[i-1][j]+a[i][j];
				else
					b[i][j]=b[i][j-1]+a[i][j];		
			}
		}
		ll mi;
		i=0;j=0;
		d[0][0]=0;
		mi=0;
		for(i=1;i<c;i++)
		{
			if(b[0][i]<0)
			{
			mi=min(b[0][i],mi);
			d[0][i]=mi;
			}
			else
			{
				d[0][i]=0;
				mi=0;	
			}		
		}
		mi=0;
		for(i=1;i<r;i++)
		{
			if(b[i][0]<0)
			{
			mi=min(b[i][0],mi);
			d[i][0]=mi;
			}
			else
			{
				d[i][0]=0;
				mi=0;
			}
		}
		for(i=1;i<r;i++)
		{
			for(j=1;j<c;j++)
			{
				k=max(d[i-1][j],d[i][j-1]);
				if(b[i][j]<0)
				d[i][j]=min(k,b[i][j]);
				else
				d[i][j]=0;
			}
		}
		if(d[r-1][c-1]>=0)
			printf("1\n");
		else
			printf("%lld\n",-d[r-1][c-1]+1);
		
	}
	
	
	return 0;
}

