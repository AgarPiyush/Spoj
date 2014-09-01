#include<stdio.h>
long long int a[100000],i,j,k=0,l,m,n,b[100000],dp[100000][4];
int main()
{
	b[0]=2;
	k=1;
	for(i=3;i<=1000;i=i+2)
	{
		if(a[i]==0)
		{
		if((i-1)%4==0)
		b[k++]=i;	
		for(j=3;i*j<=10000;j=j+2)
		{
			a[i*j]=1;
		}
		}
	}
	for(i=1001;i<=100000;i=i+4)
	{
		if(a[i]==0)
		b[k++]=i;
	}
/*	for(i=0;i<100;i++)
	printf("%lld ",b[i]);*/
	dp[0][0]=dp[0][1]=dp[0][2]=dp[0][3]=0;
	dp[1][0]=0;dp[1][1]=dp[1][2]=dp[1][3]=1;
	dp[2][0]=0;dp[2][1]=1;dp[2][2]=2;dp[2][3]=2;
	dp[3][0]=0;dp[3][1]=1;dp[3][2]=2;dp[3][3]=3;
	for(i=4;i<=8000;i++)
	{
		dp[i][1]=1;
		dp[i][2]=(i/2)+1;
		dp[i][3]=dp[i][2]+dp[i-3][3];
	}
/*	printf("\n");
	for(i=1;i<=30;i++)
	{0
		printf("%lld %lld %lld\n",dp[i][1],dp[i][2],dp[i][3]);
		
	}*/
	
	
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		long long int m=b[n-1];
	//	printf("%lld\n",m);
		printf("%lld\n",dp[m][k]);	
	}
	
	return 0;
}
