#include<stdio.h>
#include<math.h>
int main()
{
long long int t;
scanf("%lld",&t);
while(t>0)
{
double x,y,c1,c2,m1,m2,y1,x3,y3,r,y2;
scanf("%lf %lf",&x,&x);
scanf("%lf %lf",&x3,&y3,&r);
m1=(-((x-x3)*(y-y3))+sqrt((x-x3)*(x-x3)+(y-y3)*(y-y3)+r*r))/(r*r-(x-x3)*(x-x3));
m2=(-((x-x3)*(y-y3))-sqrt((x-x3)*(x-x3)+(y-y3)*(y-y3)+r*r))/(r*r-(x-x3)*(x-x3));
c1=y-y3-(m1*(x-x3));
c2=y-y3-(m2*(x-x3));
y1=(m1*52.5)+c1;
y2=(m2*52.5)+c2;
if((y1<3.66&&y1>-3.66)||(y2<3.66&&y2>-3.66))
printf("Goal!\n");
else
printf("No goal...\n");
t--;
}
return 0;
}
