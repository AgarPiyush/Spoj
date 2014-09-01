#include<stdio.h>
#include<math.h>
long long int b[1000000],t;
int main()
{
		long long int j=0;
	long long int i;
	
	for(i=1;i<=150000;i++)
	{
		long long int k=i*i;
		long long int q=(long long int)sqrt(k);
		if(q==i)
		{
			long long int copy=k;
			int flag=0;
			while(copy>0)
			{
				int rem=copy%10;
				if(rem==4||rem==9||rem==0||rem==1)
				{
					
				}
				else
				{
				flag=1;
				break;
				}
				copy=copy/10;
			}
			if(flag==0)
			b[j++]=k;
		}
	}
	scanf("%lld",&t);
	while(t--)
	{
//		printf("%lld %lld",b[120],b[121]);
		long long int n,m;
	scanf("%lld %lld",&n,&m);
	i=0;
	long long int c=0;
	for(i=0;i<120;i++)
	{
		if(b[i]>=n&&b[i]<=m)
		c++;
	}
	printf("%lld\n",c);
	
	
	}
	return 0;
}
