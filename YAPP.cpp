#include<stdio.h>
typedef long long int lll;
lll mod=1000000007;
lll power(lll p)
{
	lll x=1,b=2;
	while(p>0)
	{
		if(p%2==1)
		{
			x=x*b%mod;
		}
		b=b*b%mod;
		p=p/2;
	}
	return x;
}
int main()
{
	lll n,t,ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=power(n-1);
		printf("%lld\n",ans%mod);
	}
	return 0;
}
