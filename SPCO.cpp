#include<stdio.h>
int prime(int x)
{
	if(x==1) return 0;
	int c=1,i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			c=2;break;
		}
	}
	if(c==1) return 1;
	return 0;
}
int main()
{
	int i,copy,fi=1,rem,c=0,fir,sec,sum1=0,sum[100];
	for(i=1;i<=100;i++)
	{
		c=0;
		copy=i;
		while(copy)
		{
			copy=copy&(copy-1);
			c++;
		}
		if(prime(c))
		{
	//		printf("%lld\n",i);
			sum1++;
		}
	sum[i]=sum1;
	}	for(i=63;i<=63;i++) printf("%d ",sum[i]);
	return 0;
}
