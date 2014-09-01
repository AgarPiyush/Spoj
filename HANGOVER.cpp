#include<stdio.h>
int main()
{
	double n;
	scanf("%lf",&n);
	while(n!=0.0)
	{
		double sum=0,i=2;
		
		int c=0;
		while(sum<=n)
		{
			sum=sum+(1/i);
			c++;
			i++;
		}
		printf("%d card(s)",c);
		scanf("%lf",&n);
		t--;
	}
	return 0;
}
