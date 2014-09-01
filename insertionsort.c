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
for(j=0;j<i;j++)
{
if(s<a[j])
{
for(k=i-1;k>=j;k--)
a[k+1]=a[k];
a[j]=s;
printf("\n");
flag=1;
break;
}
}
if(flag==0)
a[i]=s;
}
for(d=0;d<n;d++)
printf("%lld ",a[d]);
printf("\n");
return 0;
}

