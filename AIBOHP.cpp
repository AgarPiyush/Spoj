#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
	return x;
	return y;
}
	char s[5010],s1[5010];
	int i,j,k,l,m,t,lcs[2][5010];
int main()
{

		scanf("%d ",&l);
		gets(s);
		j=1;
		for(i=l-1;i>=0;i--)
		{
			s1[j++]=s[i];
			s[i+1]=s[i];
		}
		for(i=1;i<=l;i++)
		{
			for(j=1;j<=l;j++)
			{
				if(s[i]==s1[j])
				lcs[i%3][j]=lcs[(i-1)%3][j-1]+1;
				else
				lcs[i%3][j]=max(lcs[(i-1)%3][j],lcs[i%3][j-1]);
			}
		}
			printf("%d\n",l-lcs[2][l]);
	
	return 0;
}
