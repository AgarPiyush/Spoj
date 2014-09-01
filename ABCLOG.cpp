#include<stdio.h>
int main()
{
	long long int i,m,n,b[10000];
	scanf("%lld",&n);
	while(n!=-1)
	{
		long long int c=0;
		while(n>0)
		{
			b[c++]=n%2;
			n=n/2;
		}
	/*	for(i=0;i<c;i++)
		printf("%lld",b[i]);
		printf("\n");*/
			long long int k=0,ans=0,pro=1;
			for(i=c-1;i>=0;i--)
			{
			if(b[i])
			{
				ans=ans+pro;
			}
			pro=pro<<1;
			}
			printf("%lld\n",ans);
			scanf("%lld",&n);
	}
	return 0;
}
