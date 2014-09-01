#include<stdio.h>
long long int a[10000000],b[10000000],i,j,k,l,t,sum,n,m;
int main()
{
	scanf("%lld",&l);
	while(l--)
	{
		scanf("%lld %llld",&m,&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		b[0]=a[1]-a[0];	
		long long int flag=0;
		
		for(i=1;i<n-1;i++)
		{
			if((a[i]-a[i-1])>m||(a[i]-a[i-1]<(-m)))
			{
			flag=1;
			//printf("how \n");
			}
			b[i]=b[i-1]+a[i+1]-a[i];
		}
		for(i=0;i<n-1;i++)
		printf("%lld ",b[i]);
		printf("\n");
		
		sum=0;
		long long int max=0;
		t=m;
		for(i=0;i<n-1;i++)
		{
			if(b[i]<=0)
			{
				sum=-b[i]+1;
				if(sum>max)
				max=sum;
				t=t-sum+1;
				if(sum>m||t<=0)
				{
			//		printf("sum>m yes\n");
					flag=1;
					break;
				}
				t=m;
			}
			else
			{
				
			}
		}
		if(flag==1)
		printf("-1\n");
		else
		{
		if(sum==0)
		printf("1\n");
		else
		printf("%lld\n",max);
		}
	}
	
	return 0;
}
