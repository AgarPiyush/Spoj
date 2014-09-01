#include<stdio.h>
#include<string.h>
char s[1000000],c;
long long int a[10000]={0,1,20,360,7200,144000,2880000,57600000,1152000000};
int main()
{
	long long int i,k,j,n;
	scanf("%lld",&n);
	while(n!=0)
	{
		long long int sum=0,ans=0;
		long long int copy=n,l;
		for(i=0;i<n;i++)
		{
			memset(s,'0',sizeof(s));	
			sum=0;
			if(i==0)
			getchar();
			gets(s);
		
			l=strlen(s);
			for(k=0;k<l;k++)
			{
				if(s[k]=='.')
				sum++;
				else if(s[k]=='-')
				sum=sum+5;
			}
			ans=ans+sum*a[copy--];
		}
		printf("%lld\n",ans);
		scanf("%lld",&n);
	}
	return 0;
}
