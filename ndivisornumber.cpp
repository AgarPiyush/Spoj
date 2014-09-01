#include<stdio.h>
#include<math.h>
long long int i,j,k,l,m,n,o,sq=(long long int )sqrt(1000000000),a[1000000]={0};
int main()
{
	for(i=2;i<=sq;i++)
	{
		for(j=1;i*j<=1000000;j++)
		{
			a[i*j]++;
		}
	}
	for(i=2;i<50;i++)
	printf("%lld %lld\n",i,a[i]+1);
	return 0;
}
