#include<stdio.h>
unsigned long long int a[1000000],b[1000000];
void mergesort(unsigned long long int a[],unsigned long long int,unsigned long long int);
void merge(unsigned long long int a[],unsigned long long int,unsigned long long int,unsigned long long int);
unsigned long long int temp[100000];
void mergesort(unsigned long long int a[],unsigned long long int l,unsigned long long int u)
{
unsigned long long int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(unsigned long long int a[],unsigned long long int l,unsigned long long int mid,unsigned long long int u)
{
unsigned long long int ac=l,bc=mid+1,cc=l,i;
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
unsigned long long int n,temp,temp1;
scanf("%llu",&n);
while(n!=0)
{
unsigned long long int i,j,sum=0;
for(i=0;i<n;i++)
scanf("%llu",&a[i]);
for(j=0;j<n;j++)
scanf("%llu",&b[j]);
mergesort(a,0,n-1);
mergesort(b,0,n-1);
j=n-1;
for(i=0;i<n;i++)
sum=sum+(a[i]*b[j--]);
printf("%llu\n",sum);
scanf("%llu",&n);
}
return 0;
}
