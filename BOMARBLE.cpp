#include<stdio.h>
int main()
{
	long long int n,i,sum;
	scanf("%lld",&n);
	while(n!=0)
	{
		sum=0;
		n=n+1;
		sum=((n*((3*n)-1))/2);
		printf("%lld\n",sum);
		scanf("%lld",&n);
	}
	return 0;
}
