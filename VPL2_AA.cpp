#include<stdio.h>
#include<math.h>
int main()
{
	double c,p0,pt,t,i,pf;
	scanf("%lf",&c);
	for(i=1;i<=c;i++)
	{
		scanf("%lf %lf %lf %lf",&p0,&pt,&t,&pf);
		double a=(log(pf/p0)/log(pt/p0))*t;
		printf("Scenario #%.0lf: %.2lf\n",i,a);
		
	}
	return 0;
}
