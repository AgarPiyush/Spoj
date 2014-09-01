#include<stdio.h>
#include<string.h>
int mark[100][100];
char s[100],a[100][100];
void recur(char c,int x,int y,int path)
{
	int o,p,flag1=0;
	for(o=x-1;o<=(x+1);o++)
	{
		for(p=y-1;p<=(y+1);p++)
		{
			if(a[o][p]==(c+1)&&mark[o][p]==0)
			{
				flag1=1;
				path++;
				mark[o][p]=path;
				recur(c+1,o,p,path);
				path--;
			}
		}
	}
	if(flag1==0)
	return;
}
int main()
{
	long long int que[100000],pos[1000][100],i,j,k,l,h,w,no=1;
	scanf("%lld %lld",&h,&w);
	while(h!=0&&w!=0)
	{
		
		long long int path,min=1000000;
		k=0;
		for(i=0;i<h;i++)
		{
			scanf("%s",s);
			for(j=0;j<w;j++)
			{
				a[i+1][j+1]=s[j];
				if(s[j]=='A')
				{
				pos[0][k]=i+1;
				pos[1][k++]=j+1;
				}
				mark[i+1][j+1]=0;
			}
		}
		int e;
		for(i=0;i<k;i++)
		{
			//printf("%lld %lld\n",pos[0][i],pos[1][i]);
			mark[pos[0][i]][pos[1][i]]=1;
			path=1;
			char c='A';
			recur(c,pos[0][i],pos[1][i],path);
			
		}
		min=0;
			for(e=1;e<=h;e++)
			{	
			for(j=1;j<=w;j++)
			{
		//	printf("%d ",mark[e+1][j+1]);
			if(mark[e][j]>min)
			min=mark[e][j];
			mark[e][j]=0;
			}
			//printf("\n");
			}
		printf("Case %lld: %lld\n",no,min);
		no++;
		scanf("%lld %lld",&h,&w);
	}
	return 0;
}

