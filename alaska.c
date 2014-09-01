#include<stdio.h>
long long int a[100000];
int main()
{
long long int i,k,j,temp,t;
scanf("%lld",&t);
while(t!=0)
{
int flag=0;
for(i=0;i<t;i++)
scanf("%lld",&a[i]);
for(i=0;i<t-1;i++)
{
for(j=0;j<t-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
a[t]=1422;
for(i=0;i<t;i++)
{
if(a[i+1]-a[i]>200)
{
flag=1;
break;
}
}
if(flag==0)
{
if((a[t]-a[t-1])>100)
flag=1;
}
if(flag==1)
printf("IMPOSSIBLE\n");
else
printf("POSSIBLE\n");
scanf("%lld",&t);
}
return 0;
}
