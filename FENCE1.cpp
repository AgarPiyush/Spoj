#include<stdio.h>
#include<math.h>
int main()
{
	long long int l;
	double r,c;
	scanf("%lld",&l);
	c=acos(0.0)*2;
	while(l!=0)
	{
	r=l/c;
	double area=(c*r*r)/2;
	printf("%.2lf\n",area);
	scanf("%lld",&l);
	}
	return 0;
}
