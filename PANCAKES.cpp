#include<stdio.h>
int main()
{
	long long int r,n,t,i,j,u=0,sum=0,min=100000,c,e=1;
	scanf("%lld %lld",&n,&r);
	while(n!=0&&r!=0)
	{e=1,u=0;
	long long int a[100][100];
	for(i=0;i<n;i++)
	scanf("%lld",&a[0][i]);
	for(i=1;i<r+1;i++)
	{
		for(j=0;j<n;j++)
		scanf("%lld",&a[i][j]);
	}
	for(i=1;i<r+1;i++)
	{
		//printf("%lld\n",i);
		sum=0;min=1000,c=0;
		for(j=0;j<n;j++)
		{
			if(a[i][j]!=0)
			{
			if((a[0][j]/a[i][j])<=min)
			{
			min=a[0][j]/a[i][j];
			c=j;
	//	printf("min is %lld\n",min);
			}
			}
		}
			if(min!=0)
			{
			sum=min*10;
	//	printf("previous sum %lld\n",sum);
			long long int rem=a[0][c]%a[i][c];
		//	printf("rem %lld\n",rem);
			double k=(double)a[i][c]/10;
	//		printf("k is %lf\n",k);
			sum=sum+(long long int)rem/k;
	//		printf("next sum %lld\n",sum);
			if(sum>u)
			{
			u=sum;
			e=i;
			}
			}
		}
	printf("%lld %lld\n",e,u);
	scanf("%lld %lld",&n,&r);
	}
	return 0;
}
