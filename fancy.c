#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char s[100000];
	long long int a[35];
	long long int i,j;
	long long int t;
	a[1]=1;
	for(i=2;i<=32;i++)
	a[i]=a[i-1]*2;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%s",s);
		long long int l=strlen(s);
		long long int c=1,sum=1;
			for(i=0;i<l-1;i++)
		{
			if(s[i]==s[i+1])
			c++;
			else
			{
				sum=sum*a[c];
				c=1;
			}
		}
		if(s[l-1]==s[l-2])
		sum=sum*a[c];
		printf("%lld\n",sum);
		t--;
	}
	
	return 0;
}



