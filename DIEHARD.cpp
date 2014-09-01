#include<stdio.h>
int main()
{
long long int t;
scanf("%lld",&t);
while(t>0)
{
	long long int h,a,c=1,flag=0;
	scanf("%lld %lld",&h,&a);
	h=h+3;a=a+2;
	if(h<=5)
	flag=1;
	if(flag!=1)
	{
		while(h>5)
		{
		while((h>20||a>20)&&h>5)
		{
		while(a>=h&&h>5)
		{
			a=a-8;
			h=h-2;
			c=c+2;
		}
		while(h>a&&h>5)
		{
			a=a+7;
			h=h-17;
			c=c+2;
		}
		}
		while(h>10&&a>10)
		{
			h=h-2;a=a-8;c=c+2;
		}
		if(h<=5)
		break;
		if(h<=20&&a<=10)
		break;
		}
	}
	printf("%lld\n",c);
	t--;
}
return 0;	
}




