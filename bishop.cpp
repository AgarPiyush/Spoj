#include<stdio.h>
#include<string.h>
char s[1000000];
int main()
{
	long long int i,j,k,l;
	while(scanf("%s",s)!=EOF)
	{
	l=strlen(s);
	if(l==1&&s[0]=='1')
	printf("1\n");
	else
	{
	k=l-1;
	if(s[l-1]=='0')
	{
		while(s[k]=='0')
		{
			s[k]='9';
			k--;
		}
	}
	s[k]=s[k]-1;
	int c=0;
	for(i=l-1;i>=0;i--)
	{
		char d;
		int a;
		
		a=s[i]-48;
		a=a*2;
		s[i]=(a%10)+48+c;
		c=a/10;
	}
	if(c==1)
	printf("1");
	for(i=0;i<l;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	}
	}
	return 0;
}

