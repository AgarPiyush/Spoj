#include<stdio.h>
long long int b[1000000],c[1000000];
int main()
{
long long int i,j,a,d;
scanf("%lld %lld",&a,&d);
while(a!=0||d!=0)
{
for(i=0;i<a;i++)
scanf("%lld",&b[i]);
for(i=0;i<d;i++)
scanf("%lld",&c[i]);
for(i=0;i<d-1;i++)
for(j=0;j<d-1-i;j++)
if(c[j]>c[j+1])
{
long long int temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
long long int min=b[0];
for(i=1;i<a;i++)
{
if(min>b[i])
min=b[i];
}
if(min<c[0])
printf("Y\n");
else
if(min>=c[0]&&min<c[1])
printf("Y\n");
else 
printf("N\n");
scanf("%lld %lld",&a,&d);
}
return 0;
}
