#include<stdio.h>
long long int a[10000000],b[10000000],i,y,x,j,k,l,m,n,o;
int main()
{
	long long int t,j=1;
	scanf("%lld ",&t);
	while(t--)
	{
		long long int c=0;
		scanf("%lld %lld",&x,&n);
		for(i=0;i<n;i++)
		{
		scanf("%lld",&a[i]);
		b[a[i]]++;
		}
		for(i=0;i<n;i++)
		{
			long long int y=x-a[i];
			b[a[i]]--;
			if(y>=0)
			c=c+b[y];
		}
		for(i=0;i<n;i++)
		{
		b[a[i]]=0;
		}
		printf("%lld. %lld\n",j++,c);
	}
	return 0;
}
