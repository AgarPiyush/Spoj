#include<stdio.h>
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
long long int a[1000000];
int main()
{
	long long int t,n,i,j,k;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		if(n==0)
		printf("1\n");
		else
		{
		mergesort(a,0,n-1);
		long long int k=1;
		for(i=1;i<n;i++)
		{
		a[i]=a[i]-k;
		if(a[i]==0)
		break;
		k++;
		}
		long long int sum=1;
		for(i=0;i<n;i++)
		sum=sum*a[i]%1000000007;
		printf("%lld\n",sum);
		}
		
		t--;
	}
	printf("KILL BATMAN\n");
	return 0;
}

