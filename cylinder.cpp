#include<stdio.h>
int main()
{
	double l,w,area,vol,r,h;
	scanf("%lf %lf",&l,&w);
	while(l!=0.0&&w!=0.0)
	{
		if(l>=w)
		{
			l=l/2;
			if(l>=w)
			{
			r=w/2;
			
			}
			else
			r=l/2;
			
			printf("area of other is %lf\n",(w*l));
			printf("radius is %lf\n",r);
			
		vol=(l*w*r)/2;
		}
		else
		{
			w=w/2;
			r=l/2;
			h=(l*w)/(2*3.14159265*r);
			vol=3.14159265*r*r*h;
		}
		printf("%3lf",vol);	
		scanf("%lf%lf",&l,&w);
		
	}
}
