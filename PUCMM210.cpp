#include<stdio.h>
long long int a[10000000],b[10000000];
int main()
{
	long long int t,n,i;
	long long int sum;
	a[1]=1;
	b[1]=a[1];
	for(i=2;i<=1000001;i++)
	{
	a[i]=(a[i-1]+(i*i*i))%1000000003;
	b[i]=(b[i-1]+a[i])%1000000003;
	}
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld",&n);
		printf("%lld\n",b[n]);
		t--;
	}
	return 0;
}
