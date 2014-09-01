#include<stdio.h>
typedef long long int ll;

int main()
{
	ll t,n,i,j,k;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ll copy=n,sum=0;
		while(copy>0)
		{
			sum+=copy%10;
			copy/=10;
		}
		int flag=0,ans=n;
		for(i=n;;i++)
		{
		
			copy=i;
		
			if(i%sum==0)
			{
					printf("%lld\n",i);

				break;
			}
				if((copy+1)%10==0)
			{
			sum=0;
			while(copy>0)
			{
			sum+=copy%10;
			copy/=10;
			}
			}
			else 
			sum++;
		}
	}
	return 0;
}
