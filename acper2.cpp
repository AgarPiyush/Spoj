#include<stdio.h>
int cal(int);
int days(int,int);
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int q,i,j,k,l,y;
int y1,y2,sum=21;
int z,v,t,aab,b,c,d,m,e;
int main()
{
	
	scanf("%d",&t);
	while(t--)
	{

	scanf("%d %lld",&y1,&y2);
	 int u=days(y1,y2);
	y1--;
	 int aa=cal(y1);
	int bb=cal(y2);
	z=bb-aa;
	printf("%lld \n",z);
	v=u-z;
	aab=v/144000;
	v=v%144000;
	b=v/7200;
	v=v%7200;
 	c=v/360;
	v=v%360;
	d=v/20;
	v=v%20;
	e=v/1;
	printf("%d.%d.%d.%d.%d\n",aab,b,c,d,e);
	
	}
	return 0;
}
int cal(int y1)
{
		int c=0;
		if(y1>=1901)
		{
		sum=20;
		a[2]=28;
		for(m=2;m<=12;m++)
		{
		sum=sum+a[m-1];
		 q=sum%7;
		if(q==3)
		{
		c++;
		}
		
		}
		}
	for(y=1902;y<=y1;y++)
	{
		
		if(y%4==0)
		{
			if(y%400==0)
			a[2]=29;
			else
			if(y%100==0)
			a[2]=28;
			else 
			a[2]=29;
		}
		else 
		a[2]=28;
		sum=sum+31;
		 q=sum%7;
		if(q==3)
		c++;
		for(m=2;m<=12;m++)
		{
		sum=sum+a[m-1];
		q=sum%7;
		if(q==3)
		{
		
		c++;
		}
		}
	}
	if(y!=1901&&y!=1900)
	c--;
	return c;
}
int days(int y1,int y2)
{
	int sum1=0;
	for(i=y1;i<=y2;i++)
	{
		if(i%4==0)
		{
			if(i%400==0)
			sum1=sum1+366;
			else
			if(i%100==0)
			sum1=sum1+365;
			else 
			sum1=sum1+366;
		}
		else 
		sum1=sum1+365;
	}
	return sum1;
}

