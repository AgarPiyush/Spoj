#include<stdio.h>
long long int even(long long int a)
{
	int flag=0;
	while(a>0)
	{
		int rem=a%10;
		if(rem%2==0)
		{
			flag=1;
			break;
		}
		a=a/10;	
	}
	if(flag==1)
	return 1;
	return 0;
}
int main()
{
	long long int i,j,k,l,m,n,o,p,t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int s,s1;
		scanf("%lld %lld",&m,&n);
		long long int a=m/10;
		if(m%10!=0)
		a=a+1;
		if(a%2==0)
		{
			a=a/2;
			s=10+(a-1)*15;
		//	printf("first %lld\n",s);
		}
		else
		{
			a=a/2+1;
			s=5+(a-1)*15;
		//	printf("first %lld \n",s);
		}
		a=n/10;
		if(n%10!=0)
		a=a+1;
		if(a%2==0)
		{
			a=a/2;
			s1=10+(a-1)*15;
		//	printf("first %lld\n",s1);
		}
		else
		{
			a=a/2+1;
			s1=5+(a-1)*15;
		//	printf("first %lld \n",s1);
		}
		long long int c=s1-s+1;
		//printf("diff in c %lld\n",c);
		if(m%10!=0)
		for(i=m;i<(m/10)*10+10;i++)
		{
			if(even(i))
			c++;
		}
		//printf("new c %lld \n",c);
		if(n%10!=0)
		for(i=n+1;i<=(n/10)*10+10;i++)
		{
			if(even(i))
			c--;
		}
		printf("new again c %lld \n",c);
	}
	return 0;
}
