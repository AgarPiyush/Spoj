#include<stdio.h>
int main()
{
long long int a,b,c,flag=0;
scanf("%lld %lld %lld",&a,&b,&c);
while(a!=0&&b!=0&&c!=0)
{
flag=0;
if(((a+b)>c)||((b+c)>a)||((c+a)>b))
flag=1;
else
printf("wrong\n");
if(flag==1)
{
a=a*a;
b=b*b;
c=c*c;
if(((a+b)==c)||((b+c)==a)||((c+a)==b))
printf("right\n");
else
printf("wrong\n");
}
scanf("%lld %lld %lld",&a,&b,&c);
}

return 0;
} 

