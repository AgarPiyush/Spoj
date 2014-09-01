#include<stdio.h>
typedef long long int lll;
lll a[100000],t,n,i,j,k;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++) scanf("%lld",&a[i]);
		lll sum=a[0],c=0;
		for(i=1;i<n;i++)
		{
			sum=a[i]-sum;
			if(sum<0)
			{
				c=1;
				break;
			}
		}
		if(sum==0&&c==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	
	return 0;
}
