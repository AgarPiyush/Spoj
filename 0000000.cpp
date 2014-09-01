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

long long int i,j,k,l,m,n,t,l,u,a[1000000],f[1000000];
int main()
{
	f[0]=0;
	f[1]=1;
	f[2]=2;
	for(i=3;i<=100000;i++)
	f[i]=f[i-1]+f[i-2];
	printf("%lld\n",f[100000]);
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	mergesort(a,0,n-1);

	return 0;
}
