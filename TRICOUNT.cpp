#include<stdio.h>
int main()
{
	unsigned long long int n,t,sum=0;
	scanf("%llu",&t);
	while(t>0)
	{
		sum=0;
		scanf("%llu",&n);
		if(n&1==1)
		{
			 sum=(((n*(n+2)*((2*n)+1))-1)/8);
			printf("%llu\n",sum);
		}
		else
		{
			 sum=(((n*(n+2)*((2*n)+1)))/8);
			printf("%llu\n",sum);
		}
		t--;
	}
	return 0;
}
