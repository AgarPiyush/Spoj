#include<stdio.h>
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[1000000];
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
long long int a[1000000];
int main()
{
	long long int n,max,i;
	scanf("%lld %lld",&max,&n);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	mergesort(a,0,n-1);
	i=0;
	long long int j,avg,flag=0,sum=0;
	for(i=0;i<n;i++)
	sum=sum+a[i];
	avg=sum/n;
	for(i=0;i<n;i++)
	{
		while(a[i]>avg)
		{
			a[i]--;
			max--;
			if(max==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
		if(i<n-2)
		if(a[i+1]<=avg)
		break;
	}	
		while(max>0)
		{
		for(i=0;i<n;i++)
		{
			a[i]--;
			max--;
			if(max==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
		}
		long long int ans=0;
		for(i=0;i<n;i++)
		ans=ans+(a[i]*a[i]);
		printf("%lld\n",ans);
		return 0;
	
}

