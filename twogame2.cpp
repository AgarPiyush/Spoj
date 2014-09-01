#include<stdio.h>
#include<math.h>
typedef long long int ll;

ll gcd(ll x,ll y)
{
	if(y==0)
	return x;
	gcd(y,x%y);
}

int main()
{
ll p,t,x,y,i,j;
scanf("%lld",&t);
while(t--)
{
	scanf("%lld %lld",&x,&y);
	if(!(x&(x-1))||!((y&(y-1))))
	printf("Y\n");
	else
	{
		ll ans=gcd(x,y);
		if(ans%2==0)
		{
			while(ans%2==0)
			{
				ans=ans/2;
			}
		}
		if(ans>1)
		printf("N\n");
		else
		printf("Y\n");	
	}
}
	return 0;
}

