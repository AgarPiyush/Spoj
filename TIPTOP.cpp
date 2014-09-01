#include<stdio.h>
#include<math.h>
int main()
{
	long long int r,a=1,b,t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		b=sqrt(n);
		if(b*b==n)
		printf("Case %lld: Yes\n",a);
		else
		printf("Case %lld: No\n",a);
		a++;
	}
	return 0;
}
