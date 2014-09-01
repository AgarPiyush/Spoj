#include<stdio.h>
#include<string.h>
long long int a[1000000],b[1000000];
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[100000];
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
if(a[ac]<a[bc])
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
int main()
{
	long long int i,j,k,t;
	scanf("%lld",&t);
	while(t>0)
	{
		memset(a,0,sizeof(a));
		long long int n;
		scanf("%lld",&n);
		char c[1000000];
		for(i=1;i<=n;i++)
		scanf("%s %lld",c,&a[i]);
		mergesort(a,1,n);
		long long int diff=0;
		for(i=1;i<=n;i++)
		{
			if((a[i]-i)>=0)
			diff=diff+a[i]-i;
			else
			diff=diff+i-a[i];
		}
		t--;
		printf("%lld\n",diff);
	}
	return 0;
	
}
