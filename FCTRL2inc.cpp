#include<stdio.h>
long long int a[10000000];
int main()
{
	long long int t,n,i,j,k,l,temp=0;
	scanf("%lld",&t);
	while(t>0)
	{
	a[0]=1;
	scanf("%lld",&n);
	k=0;
	for(i=2;i<=n;i++)
	{
		temp=0;
		for(j=0;j<=k;j++)
		{
			temp=temp+a[j]*i;
			a[j]=temp%10;
			temp=temp/10;
		}
		while(temp>0)
		{
			a[++k]=temp%10;
			temp=temp/10;
		}
	}
	for(i=k;i>=0;i--)
	printf("%lld",a[i]);
	printf("\n");
	t--;
	}
}
