#include<stdio.h>
int main()
{
long long int i,b,f;
scanf("%lld %lld %lld",&i,&b,&f);
while(i!=0||b!=0||f!=0)
{
long long int d,c=0;
if(i>=f)
d=i-f;
else
d=f-i;
if(d%b!=0)
printf("No accounting tablet\n");
else
{
long long int r=d/b;
if(r%3==0)
c=r/3;
else
{
c=r/3;
c++;
}
printf("%lld\n",c);
}
scanf("%lld %lld %lld",&i,&b,&f);
}
return 0;
}
