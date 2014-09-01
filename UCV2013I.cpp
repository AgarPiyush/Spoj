#include<stdio.h>
#include<math.h>
int main()
{
	double n,r,ans,deg;
	scanf("%lf %lf",&r,&n);
	while(r!=0&&n!=0)
	{
		deg=360.0/(2*n);
		double rad;
		rad=(3.14159265358979)*deg/(180.0);
		ans=(r*sqrt(2))/(sqrt((1-cos(rad))));
		printf("%.2lf\n",ans);
		scanf("%lf %lf",&r,&n);
	}
}
