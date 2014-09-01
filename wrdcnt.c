#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char p[50],*s[50],*k;
	long long int d=0,l=0,t,c=0,i;
	scanf("%lld",&t);
	k=(char*)malloc(100);
	char z=getchar();
	for(i=0;i<50;i++)
	s[i]=(char*)malloc(100);
	while(t>0)
	{
	scanf("%[^\n]s",p);
	strcat(p," ");
	long long int q=strlen(p);
	for(i=0;i<q-1;i++)
	{
		if(p[i]!=' ')
		k[d++]=p[i];
		else
		{
		if(p[i+1]!=' ')
		{
		strcpy(s[l],k);
		l++;
		k=NULL;
		k=(char*)malloc(100);
		d=0;
		}
		}
	}
	strcpy(s[l++],k);
	t--;
	}
	for(i=0;i<l;i++)
	printf("%s\n",s[i]);
}
