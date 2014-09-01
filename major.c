0#include<stdio.h>
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[10000000];
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


long long int a[10000000];
int main()
{
long long int t,n,i;
scanf("%lld",&t);
while(t>0)
{
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
mergesort(a,0,n-1);
long long int c=1,flag=0,k;
for(i=0;i<n/2;i++)
{
if(a[i]==a[i+1])
c++;
else
{
if(c>n/2)
{
flag=1;
k=a[i];
break;
}
else
c=0;
} 
}
long long int y=0;
if(n%2==0)
i=n/2-1;
else
i=n/2;
for(;i<n-1;i++)
{
if(a[i]!=a[i+1])
{
y=1;
break;
}
}
if(y==0)
{
flag=1;
k=a[n-1];
}
if(flag==0)
printf("NO\n");
else
printf("YES %lld\n",k);
t--;
}
return 0;
}

