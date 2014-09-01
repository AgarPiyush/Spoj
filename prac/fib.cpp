#include<stdio.h>
typedef long long int ll;
ll c1=109546051211L;
/*#define getcx getchar_unlocked
	inline void fscan(ll *a ) 
	{
	ll n=0; int ch = getcx(); int sign = 1;
	while(ch < '0' || ch > '9')
	{
	if(ch == '-') sign=-1; ch = getcx();
	}
	while(ch >= '0' && ch <= '9')
	{
	n = (n << 3) + (n << 1) + ch - '0', ch = getcx();
	}
	*a = n * sign;
	}
*/
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
int main()
{
	ll n,i;
	scanf("%lld",&n);
	if(n>587115) printf("0\n");
	else
	{
	ll res=1,k=1;
	for(i=1;i<=n;i++)
	{
	k=(k*i)%c1;
	res=mul(res,k);
	}
	printf("%lld\n",res%c1);
	}
	return 0;
}
