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
int main()
{
long long int t,a[100000];
scanf("%lld",&t);
while(t>0)
{
long long int n,l,i,j,max=0,k,f=1;
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
mergesort(a,0,n-1);
for(i=n-1;i>=1;i--)
{
if(a[i]==a[i-1])
f++;
else if(f>=max)
{
max=f;
l=a[i];
f=1;
}
else f=1;
}
if(f>=max)
{
max=f;
l=a[i];
}
printf("%lld\n",l);
t--;
}
return 0;
}
