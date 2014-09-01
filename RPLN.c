#include<stdio.h>
long long int a[1000000];
int main()
{
long long int t,j;
scanf("%lld",&t);
for(j=1;j<=t;j++)
{
long long int n,q,i,k,min;
scanf("%lld %lld",&n,&q);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
long long int c,d;
printf("Scenario #%lld:\n",j);
k=1;
while(k<=q)
{
scanf("%lld %lld",&c,&d);
min=a[c-1];
for(i=c;i<d;i++)
{
if(a[i]<min)
min=a[i];
}
printf("%lld\n",min);
k++;
}
}
return 0;
}


