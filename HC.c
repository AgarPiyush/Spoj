#include<stdio.h>
#include<string.h>
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		char s[4];
		long long int i,j=0,n;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",s);
			if(s[1]=='x')
			j++;
		}
		if(j%2==1)
		printf("lxh\n");
		else
		printf("hhb\n");
		t--;
		}
		return 0;
}
