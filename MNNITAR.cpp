
#include<stdio.h>
long long int i,j,k,t,l,m,n,mod=1000000007;
long long int power(long long int p)
{
	long long int b=2,x=1;
	while(p>0)
	{
	if(p&1)
	x=(x*b)%mod;
	b=b*b%mod;	
	p=p/2;
	}
	return x;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
	long long int a[2][2]={1,1,1,0},x[2][2]={1,0,0,1},c[2][2]={0};
	scanf("%lld",&n);
	n=n-2;
	while(n>0)
	{
		if(n%2==1)
		{
			long long int d[2][2]={0};
			for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			for(k=0;k<2;k++)
			d[i][j]+=(x[i][k]*a[k][j])%(mod-1);
			for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			x[i][j]=d[i][j];
		}
		long long int c[2][2]={0};
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		for(k=0;k<2;k++)
		c[i][j]+=(a[i][k]*a[k][j])%(mod-1);
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		a[i][j]=c[i][j];
		n=n/2;
	}
	long long int res=(x[0][0]+x[0][1])%(mod-1);
	printf("%lld\n",power(res)%mod);
	
	}

	return 0;
}
