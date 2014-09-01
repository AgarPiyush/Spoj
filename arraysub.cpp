#include<stdio.h>
long long int a[1000000];
int main()
{
	long long int i,j,k,n;

		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
		scanf("%lld",&k);
		long long int max=a[1];
		for(i=1;i<=k;i++)
		if(max<a[i])
		{
		max=a[i];
		j=i;
		}
		long long int c,l;
		printf("%lld ",max);
		for(i=2;i<=n-k;i++)
		{
			//printf("a[i]is %lld \n",a[i]);
			if((i-1)==j||a[i+k-1]>max)
			{
				//printf("for a[i] is %lld \n",a[i]);
				max=a[i];
				for(l=i;l<i+k;l++)
				{
				if(a[l]>=max)
				{
					max=a[l];
					j=l;
				}
				}
			}
			printf("%lld ",max);
		}
		max=a[n];
		if(k!=n)
		{
		for(i=n-1;i>n-k;i--)
		if(max<a[i])
		max=a[i];
		printf("%lld\n",max);
		}
		else
		printf("\n");
		return 0;
		
}
