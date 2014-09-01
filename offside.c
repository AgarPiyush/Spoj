#include<stdio.h>
int main()
{
long long int a,d,b[100000],e[100000];
scanf("%lld %lld",&a,&d);
while(a!=0&&d!=0)
{
long long int i,j,temp,min=100000,min1=100000,k=0,flag=0;
for(i=0;i<a;i++)
scanf("%lld",&b[i]);
for(j=0;j<d;j++)
scanf("%lld",&e[j]);
for(i=0;i<a;i++)
{
if(b[i]<min)
min=b[i];
}
for(i=0;i<d;i++)
{
if(e[i]<min1)
min1=e[i];
} 
if(min==min1)
{
for(i=0;i<d;i++)
if(e[i]==min)
{
k++;
if(k>1)
break;
}
if(k>1)
flag=1;
}
if(flag==1)
printf("N\n");
else
printf("Y\n");
scanf("%lld %lld",&a,&d);
}
return 0;
}
