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
long long int d,t,a[100000],i,j,m,n,min;
scanf("%lld",&t);
while(t>0)
{
min=10000000000;
scanf("%lld %lld",&n,&m);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
if(m==1)
printf("0\n");
else
{
mergesort(a,0,n-1);
for(j=0;j<=n-m;j++)
{
d=a[j+m-1]-a[j];
if(d<min)
min=d;
}
printf("%lld\n",min);
}
t--;
}
return 0;
}


