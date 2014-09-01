#include<stdio.h>
int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		double a=1.0+2*n;
		double k=a/n;
		printf("%.8lf\n",k);
	}
	return 0;
}
