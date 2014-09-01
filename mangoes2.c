#include<stdio.h>
int main()
{
long long int n,i,j,t;
scanf("%lld",&t);
while(t>0)
{
scanf("%lld",&n);
long long int copy=n;
if(n%2==0)
n=n-1;
n=n/2;
long long int real=n*n;
real=real%copy;
printf("%lld\n",real);
t--;
}
return 0;
}
