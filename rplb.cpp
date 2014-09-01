#include<stdio.h>
#include<string.h>
long long int t,i,j,k,n,max,v[10000000];
long long int a[1001][1001]={0};
int main()
{
	
	scanf("%lld",&t);
	for(k=1;k<=t;k++)
	{
		scanf("%lld %lld",&n,&max);
		for(i=1;i<=n;i++)
		scanf("%lld",&v[i]);
		for(i=v[1];i<=max;i++)
		a[1][i]=v[1];
		for(i=0;i<v[1];i++)
		a[1][i]=0;
		for(i=0;i<=n;i++)
		a[0][i]=0;
		for(i=2;i<=n;i++)
		{
			for(j=1;j<=max;j++)
			{
				if(j<v[i])
				a[i][j]=a[i-1][j];
					else
					{
							if((v[i]+a[i-2][j-v[i]])>=a[i-1][j])
							a[i][j]=v[i]+a[i-2][j-v[i]];	
							else
							a[i][j]=a[i-1][j];
							
					}
			}
		}
	
		printf("Scenario #%lld: %lld\n",k,a[n][max]);
	}
	return 0;
}



