#include<stdio.h>
int main()
{
    long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
	long long int w,W[10000]={0},v[10000]={0},i,j,k;
	long long int c[100][100]={0};
	long long int n,max;
	scanf("%lld %lld",&max,&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lld %lld",&W[i],&v[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(w=1;w<=max;w++)
		{
			if(W[i]<=w)
			{
				if((c[i-1][w])>=(v[i]+c[i-1][w-W[i]]))
				c[i][w]=c[i-1][w];
				else
				c[i][w]=v[i]+c[i-1][w-W[i]];
				
			}
			else
			c[i][w]=c[i-1][w];
		}
	}
	
	printf("%lld\n",c[n][max]);
	t--;
	}
	return 0;
}

