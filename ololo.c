#include<stdio.h>
int main()
{
long long int a[100000],i,j,n,k,s,flag,d;
scanf("%lld",&n);
scanf("%lld",&a[0]);
for(i=1;i<n;i++)
{
flag=0;
scanf("%lld",&s);
if(s>=a[i-1])
a[i]=s;
else
{
for(j=0;j<i;j++)
{
if(s<a[j])
{
for(k=i-1;k>=j;k--)
a[k+1]=a[k];
a[j]=s;
break;
}
}
}
}
for(i=0;i<n;i=i+2)
{
if(a[i]!=a[i+1])
{
printf("%lld",a[i]);
break;
}
}
return 0;
}

