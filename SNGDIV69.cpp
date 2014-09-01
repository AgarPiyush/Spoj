#include<stdio.h>
long long int even[10000],odd[10000];
int main()
{
	long long int e=0,o=0;
	long long int  n,i,b[10000];
	for(n=1;n<=500;n++)
	{
		
		long long int copy,copy1=0,j,k,l,u;
		copy=n;
		while(copy>0)
		{
			int rem=copy%10;
			b[rem]++;
			copy=copy/10;
		}
		
		long long int inc=0,dec=0;
		for(i=0;i<=9;i++)
		{
			for(j=1;j<=b[i];j++)
			{
				inc=inc*10+i;
			}
		}
		for(i=9;i>=0;i--)
		{
			for(j=1;j<=b[i];j++)
			{
				dec=dec*10+i;
			}
			b[i]=0;
		}
		long long int diff=dec-inc;
		if(diff%6==0&&diff%9==0)
		{
		copy=diff;
		long long int sum=0;
		do
		{
			sum=0;
			while(copy>0)
			{
				int rem=copy%10;
				sum=sum+rem;
				copy=copy/10;
			}
		copy=sum;	
		}while(copy>10);
		if(n%2==0)
		even[e++]=n;
		else
		odd[o++]=n;
	//	printf("%lld ",n);
		}
		//else
		//printf("%lld ",n);
		
	}
		for(i=0;i<e;i++)
		printf("%lld ",even[i]);
		printf("\n");
		for(i=0;i<o;i++)
		printf("%lld ",odd[i]);
	return 0;

}
