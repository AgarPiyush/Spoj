#include<stdio.h>
int main()
{
		long long int t;
		scanf("%lld",&t);
		while(t>0)
		{
		double b,a,r,i,n,pro=1;
		scanf("%lf %lf",&n,&r);
		n--;
		r--;
		if(r>n/2)
		r=n-r;
		for(i=0;i<r;i++)
		{
			pro=pro*(n--);
			pro=pro/(i+1);
		}
		
		printf("%.0lf\n",pro);
		t--;
		}
		return 0;
}
