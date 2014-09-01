#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000];
	long long int n,i,j,t;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int c=0,l;
		char s[100000];
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l-2;i++)
		{
			if((s[i]=='|'&&s[i+1]=='0'&&s[i+2]=='|')||(s[i]=='/'&&s[i+1]=='0'&&s[i+2]=='/')||(s[i]=='\\'&&s[i+1]=='0'&&s[i+2]=='\\')||(s[i]=='\\'&&s[i+1]=='0'&&s[i+2]=='/'))
			{
			c++;
			i=i+2;
			}
		}
		if(c==0)
		printf("That Bad Party xD\n");
		else
		printf("%lld\n",c);
		t--;
	}
}

