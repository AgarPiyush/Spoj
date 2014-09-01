#include<stdio.h>
int main()
{
	long long int r,n,i,k;
	scanf("%lld %lld",&n,&k);
	while(n!=0&&k!=0)
	{
		i=2;
		r=0;
		long long int h=1;
		while(i<=n)
		{
			r=(r+k)%i;
			i++;
			i=i-h;
			h++;
		}
		printf("%lld %lld %lld\n",n,k,r+1);
		scanf("%lld %lld",&n,&k);
	}
	return 0;
}
