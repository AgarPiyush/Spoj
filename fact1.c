#include<stdio.h>
#include<math.h>
long long int a[1000000],i,j;
int main()
{
double t,n,c=0,k,s=0;
scanf("%lf",&n);
while(n!=0)
{

for(i=2;i<=sqrt(n);i++)
{
if((long long int)n%i==0)
{
t=sqrt(i);
for(j=1;j<=i;j++)
{
if(i%j==0)
c++;
if(c>1)
break;
}
if(c==1)
{
a[i]=++s;n=n/(double)i;
i--;
}
else s=0;
c=0;
}
}
scanf("%lf",&n);
}
for(i=2;i<10;i++)
printf("%lld %lld",i,a[i]);
}
