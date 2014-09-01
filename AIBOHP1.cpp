#include<stdio.h>
int max(int x,int y)
{
	if(x>y)
	return x;
	return y;
}
	char s[5010],s1[5011];
	int i,j,k,l,m,t,lcs[3][5011];
int main()
{

		scanf("%d",&l);
		scanf("%s",s);
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
			printf("%d\n",l-lcs[l%3][l]);
	
	return 0;
}
