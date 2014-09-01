#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		double n,r,i,a,b,j;
		scanf("%lf %lf",&n,&r);
		double pro=1;
		if(r==0)
		printf("0\n");
		if(r>n)
		printf("-1\n");
		else
		{
		a=r;
		b=n-r;
		long long int k;
		for(i=n;i>=1;i--)
		{
			pro=(pro*i);
			if(a>0&&b>0)
			{
				pro=pro/(a*b);
				a--;
				b--;
			}
		}
		if(a>0)
		for(i=1;i<=a;i++)
		pro=pro/i;
		else
		for(i=1;i<=b;i++)
		pro=pro/i;
		printf("%lf\n",pro);
		
		}
		t--;
	}
	return 0;
}
