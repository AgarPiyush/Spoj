#include<stdio.h>
#include<string.h>
char s[100000],fin[100000];
int main()
{
	int i,j,k,l,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		j=0;
		fin[j++]=s[0];
		for(i=1;i<l;i++)
		{
			if(s[i]!=fin[j-1])
			fin[j++]=s[i];
		}
		k=j-1;
		int flag=0;
		for(i=0;i<=j/2;i++)
		{
			if(fin[i]!=fin[k])
			{
				flag=1;break;
			}
			k--;
		}
		if(flag) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}
