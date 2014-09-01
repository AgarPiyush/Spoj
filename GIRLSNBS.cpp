#include<stdio.h>
int main()
{
	int g,b,max=0,min=0,z=0;
	scanf("%d%d",&g,&b);
	if(g==b&&g==-1);
		else
		{
		while(z!=-1)
		{
		if(b<1001&&g<1001)
		{
			if(b>=g)
			{
				max=b;
				min=g;
			}
			else
			{
				max=g,min=b;
			}
			if(max%(min+1)==0)
			printf("%d\n",max/(min+1));
			else
			printf("%d\n",(max/(min+1))+1);
		}
		scanf("%d%d",&b,&g);
		if(b==g&&b==-1)
		z=-1;
			
		}
	}
	return 0;
}

