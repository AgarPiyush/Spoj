#include<stdio.h>
int main()
{
	double p,r,t;
	scanf("%lf %lf %lf",&p,&r,&t);
	while(p!=0&&r!=0&&t!=0)
	{
		double sum=0,e,ci,i;
		e=r/t;
		sum=p;
		printf("%lf",e);
		for(i=1;i<=t;i++)
		{
			ci=(sum*e)/100;
			printf("ci for %.0lf is %.04lf\n",i,ci);
			long long int k=ci;
			double y=ci-k;
			printf("decimal %.04lf\n",y);
			int s=(int)(y*100);
			p=s%10;
			long long int w=(long long int)p;
			if(s>=1)
			sum=sum+ci;
			else
			{
			sum=sum+k;
			}
			printf("sum %.02lf\n",sum);
			printf("\n");
		}
		printf("$%.02lf at %.02lf%% APR compounded %.0lf times yield $%.02lf\n",p,r,t,sum);
		scanf("%lf %lf %lf",&p,&r,&t);
	}
}
