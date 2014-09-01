#include<stdio.h>
int main()
{
long long int a[1000000],i,j,n,m,s,k,flag;
scanf("%lld",&n);
scanf("%lld",&a[0]);
for(i=1;i<n;i++)
{
flag=0;
scanf("%lld",&s);
for(j=0;j<i;j++)
{
if(s==a[j])
{
for(k=j;k<i;k++)
a[k]=a[k+1];
flag=1;
i=i-2;
n=n-2;
break;
}
}
if(flag==0)
{
a[i]=s;
}
}
printf("%lld\n",a[0]);
return 0;
}
