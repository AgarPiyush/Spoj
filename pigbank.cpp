#include<stdio.h>
long long int a[1000][1000]={0},v[10000000],w[10000000],i,j,k,t;
int main()
{
	scanf("%lld",&t);
	while(t>0)
	{
		long long int res,ini,fin,max,div;
		scanf("%lld %lld",&ini,&fin);
		max=fin-ini;
		long long int n;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		scanf("%lld %lld",&v[i],&w[i]);
		for(i=0;i<=max;i++)
		a[0][i]=0;
		for(i=0;i<=n;i++)
		a[i][0]=0;
		for(i=0;i<w[1];i++)
		a[1][i]=0;
		for(i=w[1];i<=max;i++)
		{
		div=i/w[1];
		a[1][i]=(div*v[1]);
		}
		for(i=2;i<=n;i++)
		{
			for(j=1;j<=max;j++)
			{
				if(j<w[i])
				{
					a[i][j]=a[i-1][j];	
				}
				else
				{
				div=j/w[i];
				res=div*v[i];
				if(a[i-1][j]==0)
				{
					a[i][j]=res;
				}
				else
				{
				if(res>a[i-1][j])
				a[i][j]=a[i-1][j];
				else
				a[i][j]=res;
				}
				}
			}
		}
		if(a[n][max]>0)
		printf("The minimum amount of money in the piggy-bank is %lld.\n",a[n][max]);
		else
		printf("This is impossible.\n");
		t--;
	}
	return 0;
	
}
