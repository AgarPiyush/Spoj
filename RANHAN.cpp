#include<stdio.h>
#include<math.h>
int main()
{
	long long int a[100],t,n,i;
	a[1]=2;
	for(i=2;i<=35;i++)
	a[i]=a[i-1]+6*(long long int)pow(3,i-2);
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",a[n]);
	}
}
