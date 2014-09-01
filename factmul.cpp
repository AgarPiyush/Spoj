#include<stdio.h>
typedef long long int ll;
ll c1=109546051211L;
ll mul(ll a1,ll b1)
{
	ll pro=0;
	b1=b1%c1;
	while(a1)
	{
		if(a1&1)
		{
			pro=pro+=b1;
			if(pro>c1) pro=pro-c1;
		}
		a1>>=1;
		b1<<=1;
		if(b1>c1)
		b1=b1-c1;
	}
	return pro;
}
ll pow(ll b,ll p)
{
	ll x=1;
	while(p>0)
	{
		if(p&1)
		x=(x*b)%c1;
		b=(b*b)%c1;
		p=p>>1;
	}
	return x;
}

int main()
{
	ll n,j;
	scanf("%lld",&n);
//	printf("%lld\n",pow(n,3));
	ll ans=1,i,c=1,res=1;
	for(j=n;j>0;j--)
	{
		ans=pow(j,c);
		res=mul(res,ans);
//		printf("%lld %lld\n",ans,res);
		c++;
	}
	printf("%lld\n",ans);
	return 0;
}
