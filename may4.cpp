#include<stdio.h>
int main()
{
	long long int i,n,r;
	scanf("%lld %lld",&n,&r);
	n--;
	r--;
	long long int pro=1;
	if(r>n/2)
	r=n-r;
	for(i=0;i<r;i++)
	{
		pro=(pro*(n));
		n--;
		pro=(pro/(i+1));
	}
	printf("%lld\n",pro%10000007);
}
