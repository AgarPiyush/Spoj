#include<stdio.h>
long long int a[1000000];
int main()
{
	long long int n,t,m,i,j;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int sum=0,g=0,r=0,d=0,min=0;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
			g++;
			if(sum<=m&&g>=r)
			{
				if(r==g)
				{
					if(sum<min)
					{
					min=sum;
					r=g;
					}
				}
				else
				{
					min=sum;r=g;
				
				}
			}
			else
			{
				while(sum>=m)
				{
				sum=sum-a[d++];
				g--;
				}
				if(sum<min&&g>=r)
				{
				min=sum;
				r=g;
				}
			}
		}
		t--;
		printf("%lld %lld\n",min,r);
	}
	return 0;
}

