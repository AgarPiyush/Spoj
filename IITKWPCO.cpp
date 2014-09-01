#include<stdio.h>
#include<string.h>
long long int a[10000000],b[10000000];
int main()
{
	long long int i,j,k,n,l,m,t;
	scanf("%lld",&t);
	while(t--)
	{
		memset(b,0,sizeof(b));
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
		scanf("%lld",&a[i]);
		b[a[i]]++;
		}
		long long int c=0;
		for(i=0;i<n;i++)
		{
			if(b[a[i]*2]>0&&b[a[i]]>0)
			{
				c++;
				b[a[i]*2]--;
				b[a[i]]--;
			}
		}
		printf("%lld\n",c);
	}
	return 0;
}


