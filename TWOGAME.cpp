#include<stdio.h>
#include<math.h>
typedef long long int ll;

ll gcd(ll x,ll y)
{
	if(y==0)
	return x;
	gcd(y,x%y);
}
int prime(ll p)
{
	ll c=1,i;
	ll sq=sqrt(p);
	for(i=2;i<=sq;i++)
	{
		if(p%i==0)
		{
			c=2;
			break;
		}
	}
	if(c==2)
	return 0;
	return 1;
}
int main()
{
ll p,t,x,y,i,j;
scanf("%lld",&t);
while(t--)
{
	scanf("%lld %lld",&x,&y);
 if(x==0||y==0)
	printf("Y\n");
	else
	if(x==1||y==1)
	printf("Y\n");
	else if(x&(x-1)||(y&(y-1)))
	printf(")
	else
	{
	if(!(x&(x-1)))
	{
	ll ans=gcd(x,y);
	if(ans>2)
	{
	printf("N\n");
	}
	else
	printf("Y\n");
	}
	else printf("Y\n");
	}
}
return 0;
}


