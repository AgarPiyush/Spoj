#include<stdio.h>
long long int cal(long long int);
long long int days(long long int,long long int);
long long int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long long int i,j,k,l,t,y;
long long int e,m,y1,y2,sum=21;
int main()
{
	
	scanf("%lld",&t);
	while(t--)
	{

	scanf("%lld %lld",&y1,&y2);
	long long int u=days(y1,y2);
	y1--;
	long long int aa=cal(y1);
	long long int bb=cal(y2);
	long long int z=bb-aa;
	long long int v=u-z;
	long long int aab=v/144000;
	v=v%144000;
	long long int b=v/7200;
	v=v%7200;
	long long int c=v/360;
	v=v%360;
	long long int d=v/20;
	v=v%20;
	long long int e=v/1;
	printf("%lld.%lld.%lld.%lld.%lld\n",aab,b,c,d,e);
	
	}
	return 0;
}
long long int cal(long long int y1)
{
	long long int c=0;
	sum=21;
	for(y=1;y<=y1;y++)
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
		if(y!=1)
		{
		sum=sum+31;
		long long int q=sum%7;
		if(q==5)
		{
		c++;
		}
		}
	for(m=2;m<=12;m++)
	{
		sum=sum+a[m-1];
		long long int q=sum%7;
		if(q==5)
		{
		c++;
		}
	}
}
	return c;
}
long long int days(long long int y1,long long int y2)
{
	long long int sum1=0;
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

