#include<stdio.h>
long long int cal(long long int);
long long int a[1000000]={0};
long long int b[1000000],n;
int main()
{
	long long int i,j,k;
	for(i=4;i<=10000;i=i+2)
	a[i]=1;
	for(i=3;i*i<=10000;i=i+2)
	{
		if(a[i]==0)
		{
			for(j=3;j*i<=10000;j=j+2)
			{
				a[i*j]=1;
			}
		}
	}
	while(scanf("%lld",&n)!=EOF)
	{
		k=0;
		b[k++]=2;
		long long int ans;
		for(i=3;i<=n;i=i+2)
		if(a[i]==0)
		b[k++]=i;
		for(i=0;i<k-1;i++)
		{
			ans=cal(b[i]);
			printf("%lld^%lld * ",b[i],ans);
		}
		ans=cal(b[k-1]);
		printf("%lld^%lld\n",b[k-1],ans);
	}
	return 0;
}
long long int cal(long long int p)
{
	long long int copy=n,sum=0,i=0;
	while(copy>0)
	{
		sum=sum+copy/p;
		copy=copy/p;
	}
	return sum;
}	

