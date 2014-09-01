#include<stdio.h>
int main()
{
	long long int i,t,j;
	scanf("%lld",&t);
	if(t<=10)
	{
	while(t>0)
	{
		long long int m,n,i,j,less;
		scanf("%lld%lld",&m,&n);
		if((n-m)<=100000&&n>0&&m>0)
		{
		long long int a[n-m+1];
		for(i=0;i<(n-m+1);i++)
		a[i]=0;
		for(i=2;(i*i)<=n;i++)
		{
			less=m/i;
			less=less*i;
			for(j=less;j<=n;j=j+i)
			{
			if(j>=m&&j!=i)
			a[j-m]=1;
			}
		}
		for(i=0;i<n-m+1;i++)
		{
		if(a[i]==0&&(m+1)!=1)
		if(i==0&&m==1);
		else
		printf("%lld\n",m+i);
		}
		if(t)	
		printf("\n");
		}
		t--;
	}
	}
	return 0;
}
