#include<stdio.h>
#include<string.h>
long long int n,dp[1000000];
char s[100000];
long long int max(long long int q,long long int w)
{
	if(q>w)
	return q;
	return w;
}
long long int cal(long long int i)
{
	long long int res;
	if(i==n)
	return 0;
	res=dp[i];
	if(res!=-1)
	return res;
	else
	{
		 res=0;
		long long int k,sug=0,sour=0;
		for(k=i;k<n;++k)
		{
			if(s[k]=='1')
			sug++;
			else
			sour++;
			if(sug>sour)
			res=max(res,cal(k+1)+sug+sour);
			else
			res=max(res,cal(k+1));
			dp[i]=res;	
			//printf("k %lld res %lld\n",k,res);
		}
			return res;
	}
}
int main()
{
	long long int t,i,j,l;
	scanf("%lld",&t);
	while(t--)
	{
		memset(dp,-1,sizeof(dp));
		scanf("%lld",&n);
		scanf("%s",s);
		long long int res=cal(0);
		printf("%lld\n",res);
	}
	return 0;
	}
