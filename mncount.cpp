#include<stdio.h>
int main()
{
	long long int a[100000],i;
	a[1]=0;
	a[2]=1;
	a[3]=2;
	a[4]=3;
	long long int k=2;
	for(i=5;i<1000;i++)
	{
	a[i]=a[i-1]+k;
	k++;
	}
	for(i=1;i<=100;i++)
	printf("%lld\n",a[i]);
	return 0;
}
