#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char p[50],*s[50],k[50],*temp,a[100],h[50];
	long long int d=0,l=0,t,c=0,i;
	scanf("%lld",&t);
	temp=(char*)malloc(50);
	char z=getchar();
	for(i=0;i<50;i++)
	s[i]=(char*)malloc(100);
	while(t>0)
	{
	scanf("%[^\n]s",p);
	strcat(p," ");

	for(i=0;i<strlen(p);i++)
	{
		if(p[i]!=' ')
		{
		k[d++]=p[i];
	
		}
		else
		{
		strcpy(s[l],k);
		printf("%s\n",s[l]);
		l++;
		char k[49];
		d=0;
		}
	}
	t--;
	}
	for(i=0;i<l;i++)
	printf("%s\n",s[i]);
	
}
