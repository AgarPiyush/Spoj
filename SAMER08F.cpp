#include<stdio.h>
int main()
{
	long long int n,sum=0,i,j;
	scanf("%lld",&n);
	while(n!=0)
	{
		sum=0;
		for(i=1;i<=n;i++)
		sum=sum+(i*i);
		printf("%lld\n",sum);
		scanf("%lld",&n);
	}
	return 0;
}
