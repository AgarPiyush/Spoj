#include<stdio.h>
#include<string.h>
int t,i,j,k,l;
int c[100],c1[100],b[10000];
int v[20],v1[100],p;
char s[100000];
int main()
{
	k=0,l=0;
	for(i=97;i<=122;i++)
	if(i=='a'||i=='e'||i=='o'||i=='i'||i=='u')
	{
	v1[l]=i;	
	v[i]=l++;
	}
	else
	{
	c1[k]=i;
	printf("%c %d %c \n",i,k,c1[k]);
	c[i]=k++;
	}
	for(i=0;i<k;i++)
	printf("%d ",c1[i]);
	printf("\n");
	for(i=0;i<l;i++)
	printf("%c",v1[i]);
	printf("\n");
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			b[s[i]]++;
			if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='u'||s[i]=='i')
			{
			p=v[s[i]]+(b[s[i]]-1)*5;
			printf("%c %d %c\n",s[i],p,c1[p%k]);
		
			}
			else
			{
				p=c[s[i]]+(b[s[i]]-1)*21;
				printf("%c %d %c\n",s[i],p,v1[p%l]);
				
			}
		}
		printf("\n");
	}
	return 0;	
}
