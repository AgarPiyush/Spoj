#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int sum=0,n,i,j=3;
		scanf("%lld",&n);
		sum=n*(3*n+1)/2;
		printf("%lld\n",sum);
		t--;
	}
	return 0;
}
