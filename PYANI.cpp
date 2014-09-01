#include<stdio.h>
long long int a[1000000];
int main()
{
	long long int i,j,n,r,flag=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				long long int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n-1;i=i+2)
	{
		if(a[i]!=a[i+1])
		{flag=1;
			printf("%lld\n",a[i]);
			break;
		}
	}
	if(flag==0)
	printf("%lld",a[n-1]);
	
}
