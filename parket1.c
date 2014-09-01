#include<stdio.h>
#include<math.h>
int main()
{
double r,b,l,w;
scanf("%lf %lf",&r,&b);
double c=((r/2)-2)*((r/2)-2);
l=(sqrt(c-(4*b))/2)+(r/4)+1;
w=(r/2)+2-l;
if(l>=w)
printf("%.0lf %.0lf\n",l,w);
else
printf("%.0lf %.0lf\n",w,l);
return 0;
}
