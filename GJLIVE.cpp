#include<stdio.h>
int main()
{
	int flag=0,sum=0,a[10],i,d,min=100,g=0,f=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>100&&a[i]<1)
		flag=1;
	}
	if(flag==0)
	{
		for(i=0;i<10;i++)
		{
			sum=sum+a[i];
			if(sum<=100)
			d=100-sum;
			else
			d=sum-100;
			if(d<=min)
			{
			min=d;
			if(sum>=100)
			f=1;
			else
			f=0;
			}
			else
			break;
		}
		if(f==1)
		printf("\n%d",100+min);
		else
		printf("\n%d",100-min);
		
	}
	return 0;
}
