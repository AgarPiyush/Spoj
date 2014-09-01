#include<stdio.h>
long long int a[10000000],b[10000000],i,y,x,j,k,l,m,n,o;
int main()
{
	long long int t,j=1;
	scanf("%lld ",&t);
	while(t--)
	{
		long long int c=0;
		scanf("%lld %lld",&n,&x);
		if(x<0)
		x=-x+100000;
	//	printf("%lld\n",n);
		for(i=0;i<n;i++)
		{
		scanf("%lld",&a[i]);
		if(a[i]<0)
		a[i]=-a[i]+100000;
	//	printf("%lld \n",a[i]);
		b[a[i]]++;
		}
	//	printf("yes");
		for(i=0;i<n;i++)
		{
			long long int y;
			if(x>100000&&a[i]>100000)
			if(x>a[i])
			y=x-a[i]+100000;
			else
			y=a[i]-x;
			if(x>100000&&a[i]<100000)
			y=x+a[i];
			if(x<100000&&a[i]<100000)
			{
			y=x-a[i];
			if(y<0)
			y=-y+100000;
			}
			if(x<100000&&a[i]>100000)
			y=a[i]-100000+x;
			printf("y is %lld\n",y);
			b[a[i]]--;
			if(y>=0)
			c=c+b[y];
		}
		for(i=0;i<n;i++)
		{
		b[a[i]]=0;
		}
		printf("%lld\n",c);
	}
	return 0;
}
