#include<stdio.h>
int main()
{
	
	long long int a[14]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800};
	long long int i,n,j,k;
	while(scanf("%lld %lld",&n,&k)!=EOF)
	{
	long long int sum=a[n];
	for(i=0;i<k;i++)
	{
		scanf("%lld",&j);
		sum=sum/a[j];
	}
	printf("%lld\n",sum);	
	}
	return 0;
}
