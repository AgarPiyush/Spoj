#include<stdio.h>
long long int b[100000];
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
	long long int i,j=0,k,l,t,n,m;
	scanf("%lld",&t);
	while(t--)
	{
		long long int c=0,o=0;
		scanf("%lld %lld",&n,&m);
		for(i=n;i<=m;i++)
		{
		if(!even(i))
		{
			printf("%lld ",i);
			o++;
		}
		else
		c++;
		}
		printf("\n%lld %lld\n",o,c);
	}
	return 0;
}

