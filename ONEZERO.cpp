#include<stdio.h>
typedef long long int ll;
int main()
{
ll i,j,k,s,t,n,m;
while(1)
{
	scanf("%lld",&m);
	j=1;
	while(1)
	{
		n=m;
		n=n*j;
	//	printf("%lld ",n);
		ll copy=n;
		ll flag=0;
		while(copy>0)
		{
			ll rem=copy%10;
			if(rem==0||rem==1)
			{	}
			else
			{
			flag=1;break;
			}	
			copy=copy/10;
		}
		if(flag==0) break;
		j++;
	}
	printf("%lld\n",n);	
}
return 0;
}
