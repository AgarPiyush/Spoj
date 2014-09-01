#include<stdio.h>
int main()
{
	long t,y=1;
	scanf("%ld",&t);
	while(t>0)
	{
		long int n,f;
		scanf("%ld%ld",&n,&f);
		if((n>0)&&(n<1000001)&&(f>0)&&(f<1001))
		{
			long int a[f];
			int i,j,flag=0,k=0,m=0;
			for(i=0;i<f;i++)
			{
			scanf("%ld",&a[i]);
			if(a[i]>0&&a[i]<=10000)
			flag=0;
			else
			{
				flag=1;break;
			}
			}
			if(flag==0)
			{
				for(i=0;i<f-1;i++)
				{
				for(j=0;j<(f-i-1);j++)
				{
					if(a[j]<a[j+1])
					{
						long int temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
				}
			long int sum=0;
			for(i=0;i<f;i++)
			{
			sum=sum+a[i];
			if(sum>=n)
			{
			k=1;
			m=i+1;
			break;	
			}	
			}
			if(k==1)
			{
				printf("Scenario #%d:\n",y++);
				printf("%d\n",m);
				printf("\n");
			}
			else
			{
			printf("Scenario #%d:\n",y++);	
			printf("impossible");
			printf("\n");
			}
			sum=0;
			k=0;
			}
		}
		t--;
	}
	
}
