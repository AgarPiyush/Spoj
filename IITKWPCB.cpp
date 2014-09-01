#include<stdio.h>
long long int gcd(long long int,long long int);
int main()
{
	long long int n,k,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==1)
		printf("0\n");
		else if(n==2)
		printf("1\n");
		else
		{
		if(n%2==0)
		{
		k=n/2-1;
		if(k%2==0)
		k--;
		printf("%lld\n",k);
		}
		else
		printf("%lld\n",n/2);
		}
	}
	return 0;
}
