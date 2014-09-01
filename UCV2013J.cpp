#include<stdio.h>
#include<math.h>
long long int a[10000000]={0};
int main()
{
	long long int n;
	scanf("%lld",&n);
	while(n!=0)
	{
	long long int i;
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	long long int d=n/2;
	long long int sum=0;
	for(i=n-1;i>=(d);i--)
	sum=sum+a[i];
	printf("%lld\n",sum);
	scanf("%lld",&n);
	}
	return 0;
}
