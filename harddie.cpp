#include<stdio.h>
int main()
{
    int a,h,l,t=1;
	scanf("%d",&l);
		if(l<11)
		{
			while(l>0)
			{
			scanf("%d%d",&h,&a);
			if((h>0)&&(h<1001)&&(a>0)&&(a<1001))
			{
				t=1;
				h=h+3;a=a+2;
				while(h>20&&a>10)
				{
					if(h>=a)
					{
						h=h-20;
						a=a+5;
						t=t+2;
						h=h+3;
						a=a+2;
					}
					else
					{
						h=h-5;
						a=a-10;
						t=t+2;
						h=h+3;
						a=a+2;
					}
				}
				while((h>5)&&(a>10)&&(h<=20))
				{
					h=h-5;
					a=a-10;
					t=t+2;
					h=h+3;
					a=a+2;
					
				}
			}
			printf("%d\n",t);
			l--;
			}
		}
	
	return 0;
}
