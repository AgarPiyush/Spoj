#include<stdio.h>
#include<math.h>
long long int dp[1000000],i,j,k,l;
long long int recur(long long int n)
{
	if(n<=1000000)
	return dp[n];
	else if(n%2==1)
	return recur(n/2)+1;
	else 
	return recur(n-1)+1;
}
int main()
{
	dp[2]=1;
	dp[3]=2;
	for(i=4;i<=1000000;i++)
	{
	if(!i&1)
	dp[i]=dp[i/2]+1;
	else
	dp[i]=dp[i-1]+1;
	}
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	long long int n,w,max;
	scanf("%lld",&n);
	/*for(i=2;i<=20;i++)
	printf("%lld %lld\n",i,dp[i]);*/
	long long int k=(long long int)(log2(n));
	long long int e=(long long int )pow(2,k);
	//printf("%lld\n",e);
	long long int ans=10000000000000000;
	if(e==n)
	printf("%lld\n",dp[e]-1);
	else
	{
	
	for(w=e;w<=n;w++)
	{
		if(w>100000)
		{
			long long int res=recur(w);
			long long int res1=(n-w);
			if(res>res1)
			max=res;
			else
			max=res1;
			if(max<ans)
			ans=max;
		}
		else
		{
			long long int res=dp[w];
			long long int res1=dp[n-w];	
			if(res>res1)
			max=res;
			else
			max=res1;
			if(max<ans)
			ans=max;
		}
		
	}
	printf("%lld\n",ans);
	}}
	return 0;
}
