#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int i,j,sum=0;
		scanf("%lld %lld",&i,&j);
		if((i%2==0)&&(j%2==0))
		{
		if((j-i==0)||(i-j==2))
		printf("%lld\n",(i+j));
		else
		printf("No Number\n");
		}
		else if((i%2==1)&&(j%2==1))
		{
		if((i-j==0)||(i-j==2))
		printf("%lld\n",i+j-1);
		else
		printf("No Number\n");
		}
		else
		printf("No Number\n");
		t--;
	}
	return 0;
}
