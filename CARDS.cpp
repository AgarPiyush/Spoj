#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int sum=0,n,i,j=3;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			sum=sum+j;
			j=j+3;
		}
		sum=sum-n;
		sum=sum%1000007;
		printf("%lld\n",sum);
		t--;
	}
	return 0;
}
