#include<stdio.h>
int main()
{
long long int n,t;
scanf("%lld",&t);
while(t>0)
{
scanf("%lld",&n);
if(n%2==1)
n++;
printf("%lld\n",n/2);
t--;
}
return 0;
}
