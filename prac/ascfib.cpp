#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
typedef int ll;
ll b,i,j,k,a1,b1,t,m,n,mod=100000;
/*#define getcx getchar_unlocked
inline void fscan(ll *a ) 
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
ll f[1110000],g[1110000],l;
using namespace std;
int main()
{
		f[1]=0;
		f[2]=1;
		for(i=3;i<=1110000;i++)
		f[i]=(f[i-1]+f[i-2])%mod;
		scanf("%lld",&t);
		for(l=1;l<=t;l++)
		{
		ll min=0,k=2;
		printf("Case %d:",l);
		scanf("%d",&n);
        scanf("%d",&m);
		priority_queue<int,vector<int>,greater<int> > pq;
		pq.push(f[n]);pq.push(f[n+1]);
		g[0]=f[n];
		g[1]=f[n+1];
		for(j=n+2;j<=n+m;j++)
		{
		g[k]=(g[k-1]+g[k-2])%mod;
		pq.push(g[k]);
		k++;
		}
		ll max;
		k=0;
		if(m>=100) max=99; else max=m;
		for(j=0;j<=max;j++)
		{
		printf(" %lld",pq.top());
		pq.pop();
		}
		printf("\n");
		
}

	return 0;
}



