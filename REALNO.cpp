#include<stdio.h>
int i,j,k,l;
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		double min1=3,min2=3,no,min3=3,min4=3,max1=0,max2=0,max3=0,max4=0,c1=0,c2=0,c3=0,c4=0;
		for(i=0;i<n;i++)
		{
			scanf("%lf",&no);
			if(no<=.5)
			{
				c1++;
				if(no<min1)
				min1=no;
				if(no>max1)
				max1=no;
			}
			else if(no>.5&&no<1)
			{
				c2++;
				if(no<min2)
				min2=no;
				if(no>max2)
				max2=no;
			}
			else if(no>=1)
			{
				c3++;
				if(no<min3)
				min3=no;
			}
		}
		int q=0,w=0,flag=0,ans=0;
		if(c2>=2)
		{
		ans=1;
		printf("found\n");
		}
		if(!ans)
		if((c1==0&&c2==0)||(c2==0&&c3==0))
		{
		printf("not found\n");ans=1;
		}
		if(!ans)
		if(c2>0&&c1>0)
		{
			if(max2+max1>1)
			{
			ans=1;
			printf("found\n");
			}
		}	
		if(!ans)
		{
			if(c3>0&&c2>0)
			if(min2+min3<2)
			{
				printf("found\n");ans=1;
			}
		}
		if(!ans)
		{
			if(c1>0&&c3>0)
			if(min1+min3>1&&min1+min3<2)
			{
				printf("found\n"); ans=1;
			}
		}
		if(!ans) printf("not found\n");
	}
	return 0;
}
