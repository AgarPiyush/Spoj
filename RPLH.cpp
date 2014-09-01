#include<stdio.h>
#include<math.h>
int main()
{
	double x,v,d,k,p,ans;
	long long int z=1;
	p=2*(acos(0));
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lf %lf",&x,&v);
		k=(x*9.806)/(v*v);
		if(k<=1)
		{
			d=asin(k);
			ans=(180*d)/p;
			ans=ans/2;
			printf("Scenario #%lld: %.2lf\n",z,ans);
		}
		else
		printf("Scenario #%lld: -1",z);
		t--;
		z++;
	}
	return 0;
}
