#include<stdio.h>
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[1000005];
void mergesort(long long int a[],long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(long long int a[],long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(a[ac]>a[bc])
temp[cc++]=a[ac++];
else 
temp[cc++]=a[bc++];
}
while(ac<=mid)
temp[cc++]=a[ac++];
while(bc<=u)
temp[cc++]=a[bc++];
for(i=l;i<cc;i++)
a[i]=temp[i];
}
long long int a[1000005]={0},b[1000005],i,j,k,t,n,max,m,l;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		long long int c=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		mergesort(a,0,n-1);
		long long int sum=0;
		for(i=0;i<n;i++)
		{
			long long int copy=a[i],k=0,flag=0,rem;
			while(copy>0)
			{
				rem=copy%2;
				b[k]=b[k]^(rem);
				copy=copy/2;
				k++;
				if(i==0)
				max=k;
			}
			
			for(j=0;j<max;j++)
			{
				if(b[j]!=0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				sum=a[i];
			}
		}
		c=0;
		for(i=0;i<max;i++)
		{
			if(b[i]!=0)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		printf("NO\n");
		else
		{
		long long int sum1=0;
		for(i=0;i<n;i++)
		sum1+=a[i];
		printf("%lld\n",sum1-sum);	
		}
		for(i=0;i<max;i++)
		b[i]=0;
	}
	return 0;
}
