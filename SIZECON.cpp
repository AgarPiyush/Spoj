#include<stdio.h>
int main()
{
	long long int i,j,sum=0;
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
		scanf("%d",&a);
		if(a>0)
		sum=sum+a;
		t--;
	}
	printf("%lld",sum);
	return 0;
}
