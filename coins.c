#include<stdio.h>
unsigned long long int a[1000000];
unsigned long long int recurs(unsigned long long int);
unsigned long long int recur(unsigned long long int);
int main()
{
unsigned long long int i,j,t,k,n;
for(i=0;i<=11;i++)
a[i]=i;
for(i=12;i<=1000000;i++)
a[i]=a[i/2]+a[i/3]+a[i/4];
while(scanf("%llu",&n)!=EOF)
{
if(n<=1000000)
printf("%lld\n",a[n]);
else
{
unsigned long long int k=recurs(n);
printf("%lld\n",k);
}

}
return 0;
}
unsigned long long int recurs(unsigned long long int n)
{
if(n<=1000000)
return a[n];
else
return (recurs(n/2)+recurs(n/3)+recurs(n/4));
}
