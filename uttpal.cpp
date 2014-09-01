#include<stdio.h>
#define ll long long int
long long int i,j,k,t,l,m,n,mod=1000000007;
ll fibo_arr[1000000];
int main()
{
	
	long long int n,m,w,p;
	scanf("%lld %lld",&w,&m);
	ll q=0;
	for(p=w;p<=m+1;p++)
	{
		
	long long int a[2][2]={1,1,1,0},x[2][2]={1,0,0,1},c[2][2]={0};
	n=p-3;

	while(n>0)
	{
		if(n%2==1)
		{
			long long int d[2][2]={0};
			for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			for(k=0;k<2;k++)
			d[i][j]+=(x[i][k]*a[k][j])%mod;
			for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			x[i][j]=d[i][j];
		}
		long long int c[2][2]={0};
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		for(k=0;k<2;k++)
		c[i][j]+=(a[i][k]*a[k][j])%mod;
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		a[i][j]=c[i][j];
		n=n/2;
	}
	
	long long int fib=(x[0][0]+x[0][1])%mod;
	if(n==-2)
		fibo_arr[q++]=0;
	else
		fibo_arr[q++]=fib;
	}
	ll ans=0;
	for(i=0;i<q-1;i++)
	{
		ans=(ans+(fibo_arr[i]*fibo_arr[i+1])%mod)%mod;
	}	
	printf("%lld\n",ans);

	
	return 0;
}

