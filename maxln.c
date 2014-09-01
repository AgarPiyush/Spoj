#include<stdio.h>
int main()
{
long long int t;
scanf("%lld",&t);
while(t>0)
{
long long int y=1;
float r,s;
scanf("%f",&r);
s=(4*r*r)+1.0/4;
printf("Case %lld: %.2f\n",y,s);
t--;
y++;
}
return 0;
}
