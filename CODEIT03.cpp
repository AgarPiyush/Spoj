#include<stdio.h>
int main()
{
	long long int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	long long int i,j,k,l,t;
	scanf("%lld",&t);
	while(t--)
	{
	long long int d,m,y,sum=0;
	scanf("%lld %lld %lld",&d,&m,&y);
	for(i=1;i<y;i++)
	{
		if(i%4==0)
		{
			if(i%400==0)
			sum=sum+366;
			else
			if(i%100==0)
			sum=sum+365;
			else 
			sum=sum+366;
		}
		else 
		sum=sum+365;
	}
		if(y%4==0)
		{
			if(i%400==0)
			a[2]=29;
			else
			if(y%100==0)
			a[2]=28;
			else 
			a[2]=29;
		}
		else 
		a[2]=28;
		for(i=1;i<m;i++)
		sum=sum+a[i];
		sum=sum+d;
		printf("%lld\n",sum);
		sum=sum%7;
		switch(sum)
		{
			case 1:
			printf("Monday\n");
			break;
			case 2:
			printf("Tuesday\n");
			break;
			case 3:
			printf("Wednesday\n");
			break;
			case 4:
			printf("Thursday\n");
			break;
			case 5:
			printf("Friday\n");
			break;
			case 6:
			printf("Saturday\n");
			break;
			case 0:
			printf("Sunday\n");
			break;
		} 	
	}
	return 0;
}
