//Author : Piyush Agarwal
#include<stdio.h>
#define ll long long int
#define mod 1000000007
#define inp1(a) scanf("%d",&a);
#define outl(a) printf("%lld\n",a);
#define out(a) printf("%lld ",a);
#define line printf("\n");
#define FOR(i,b,e) for(i=b;i<=e;i++)
#define mp make_pair
#define pb push_back
#define inp2(a,b) scanf("%lld %lld",&a,&b)
#define getcx getchar_unlocked
#define chkbit(s,b) (s & (1<<b))
#define setbit(s,b) (s | (1<<b))
#define clrbit(s,b) (s &= ~(1<<b))

 
inline void finp(int *a )
{
	int n=0; int ch = getcx(); int sign = 1;
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
int i,j,k,l,m,n;
ll dp[1048600];
int a[22][22];
int pre[25];
ll recur(int pos,int mask,int n)
{
	ll co=0;
	if(pos==n)
		return 1;
	if(dp[mask]!=-1)
		return dp[mask];
	int i,p=0;
	for(i=0;i<n;i++)
	{
		if(a[pos][i]&&(!(mask&pre[i])))
		{
			p=mask+pre[i];
			dp[p]=recur(pos+1,p,n);
			co=co+dp[p];
		}
	}
	return co;
}
int main()
{
    int t;
    for(i=0;i<=20;i++)
    	pre[i]=1<<i;
    finp(&t);
    while(t--)
    {
        finp(&n);
   	    for (i = 0; i < pre[n]; ++i)
        	dp[i]=-1;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            	finp(&a[i][j]);
        printf("%lld\n",recur(0,0,n));
    }
   return 0;
}

