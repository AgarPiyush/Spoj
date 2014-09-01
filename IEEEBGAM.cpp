#include<stdio.h>
double k,n;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lf",&n);
		k=n/(n+1);
		printf("%.8lf",k);
	}
	return 0;
}
