#include<stdio.h>
#include<string.h>
long long int a[100005][4]={0};
int main()
{
	long long int i,j,k,l,n;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int c=0;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
		for(j=1;j<=3;j++)
		{
			scanf("%lld",&a[i][j]);
		}
		}
		long long int b[100005]={0};
		for(j=1;j<=3;j++)
		{
			for(i=1;i<=n;i++)
			{
				if(a[i][j]==1)
				{
					b[i]++;
				}
			}
		}
		for(i=1;i<=n;i++)
		if(b[i]!=0)
		c++;
		printf("%lld\n",c);
	}
	
	return 0;
}
