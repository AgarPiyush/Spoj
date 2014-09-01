#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int t,k,n,a[1000005]={0},b[1000000],i,j;
int main()
{
	
	b[0]=0;
	b[1]=0;
	b[2]=1;
	b[3]=2;
	k=1000000/2;
	for(i=2;i<=k;i++)
	{
		for(j=2;i*j<=1000000;j++)
		{
			a[i*j]=a[i*j]+i;
		}
		
	}
	for(i=4;i<=1000000;i++)
	b[i]=b[i-1]+a[i]+1;
	scanf("%lld",&t);
	while(t--)
	{
	scanf("%lld",&n);
	printf("%lld\n",b[n]);
	}
	return 0;
}
