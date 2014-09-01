#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char p[50],*s[50],*k,*temp,a[100];
	long long int d=0,l=0,t,c=0,i;
	scanf("%lld",&t);

	char z=getchar();
	while(t>0)
	{
	gets(p);
	strcat(p," ");
	k=(char*)malloc(20);

	for(i=0;i<strlen(p);i++)
	{
		if(p[i]!=' ')
		k[d++]=p[i];
		else
		{

		strncpy(k,k,d-1);
		printf("%s\n",k);
		s[l]=k;
		strcat(s[l]," ");l++;
		k=NULL;
		k=(char*)malloc(20);
		strcpy(k,a);
		d=0;
		}
	}
	t--;
	}
	for(i=0;i<l;i++)
	printf("%s\n",s[i]);

}
