#include<stdio.h>
 long long int josephus(long long int,long long int);
int main()
{
	long long int r,n,i,k;
	scanf("%lld",&n);
	while(n!=0)
	{
		r=josephus(n,1);
		k=1;
		i=2;
		r=0;
		long long int h=1;
		while(i<=n)
		{
			r=(r+k)%i;
			i++;
			k++;
		}
		printf("%lld\n",r);
		scanf("%lld",&n);
	
	}
	return 0;
}
 
