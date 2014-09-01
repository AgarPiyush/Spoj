#include<stdio.h>
int main()
{
long long int n;
scanf("%lld",&n);
int flag=0;
while(n>1)
{
if(n%2==0)
n=n/2;
else
{
flag=1;
break;
}
}
if(n==1||n==0)
flag=0;
if(flag==0)
printf("TAK\n");
else
printf("NIE\n");
return 0;
}
