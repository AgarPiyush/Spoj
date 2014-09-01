#include<stdio.h>
#include<string.h>
long long int a[1000000],b[1000000],c[1000000],d[1000000],e[1000000],i,j,k;
int main()
{
	long long int l,m,n;
	scanf("%lld",&m);
	while(m!=0)
	{
		memset(e,0,sizeof(e));
		memset(d,0,sizeof(d));
		l=0;
		for(i=0;i<m;i++)
		scanf("%lld",&a[i]);
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&b[i]);
		k=0;
		long long int flag=0;
		for(i=0;i<m;i++)
		{
			for(j=k;j<n;j++)
			{
				if(a[i]==b[j])
				c[l++]=a[i];
				else if(j==n-1&&b[j]<a[i])
				{
					flag=1;
					break;
				}
				else if(b[j]>a[i])
					{
					k=j;
					break;
					}
				
			}
			if(flag==1)
			break;
		}
		if(l!=0)
		{
		k=0;
		long long int q=0,w=0,sum=0;
		for(i=0;i<m;i++)
		{
			if(a[i]!=c[k])
			sum=sum+a[i];	
			else
			{
				d[q++]=sum;
				d[q++]=c[k++];
				sum=0;
			}
		}
		d[q++]=sum;
		k=0,sum=0;
		for(i=0;i<n;i++)
		{
			if(b[i]!=c[k])
			sum=sum+b[i];	
			else
			{
				e[w++]=sum;
				e[w++]=c[k++];
				sum=0;
			}
		}
		e[w++]=sum;
		sum=0;
		for(i=0;i<w;i++)
		if(e[i]>=d[i])
		sum=sum+e[i];
		else
		sum=sum+d[i];
		printf("%lld\n",sum);
		}
		else
		{
			long long int sum1=0,sum2=0;
			for(i=0;i<m;i++)
			sum1=sum1+a[i];
			for(j=0;j<n;j++)
			sum2=sum2+b[j];
			if(sum1>sum2)
			printf("%lld\n",sum1);
			else
			printf("%lld\n",sum2);
		}
		scanf("%lld",&m);
	}
	return 0;	
}
