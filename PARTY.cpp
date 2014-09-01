#include<stdio.h>
#include<string.h>
long long int c[600][500]={0};
int main()
{
    
	long long int n,max;
	scanf("%lld %lld",&max,&n);
	while(max!=0&&n!=0)
	{
	memset(c,0,sizeof(c));
	long long int w,W[10000]={0},v[10000]={0},i,j,k;
	for(i=0;i<=max;i++)
	c[0][i]=0;
	for(i=0;i<=n;i++)
	c[i][0]=0;
	for(i=1;i<=n;i++)
	scanf("%lld %lld",&W[i],&v[i]);
	for(i=1;i<=n;i++)
	{
		for(w=1;w<=max;w++)
		{
			if(W[i]<=w)
			{
				if((c[i-1][w])>=(v[i]+c[i-1][w-W[i]]))
				c[i][w]=c[i-1][w];
				else
				{
				c[i][w]=v[i]+c[i-1][w-W[i]];
				}
			}
			else
			c[i][w]=c[i-1][w];
		}
	}
	k=c[n][max];
	for(i=max;i>=0;i--)
	{
		if(c[n][i]!=k)
		{
			break;
		}
	}
	printf("%lld %lld\n",i+1,c[n][max]);
	scanf("%lld %lld",&max,&n);
	}
	return 0;
}

