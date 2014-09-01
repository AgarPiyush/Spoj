#include<stdio.h>
long long int c,a[1000005],i,k,l,m,n,t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		long long int e=a[0];
		c=1;
		for(i=1;i<n;i++)
		{
			if(a[i]==e)
			c++;
			else
			{
				c--;
				if(c==0)
				{
				e=a[i];
				c=1;
				}
			}
		}
		if(c>=1)
		{
			k=0;
			for(i=0;i<n;i++)
			if(a[i]==e)
			k++;
		}
		if(k>n/2)
		{
			printf("YES %lld\n",e);
		}
		else
		printf("NO\n");
	}
	return 0;
}

