#include<stdio.h>
#include<limits.h>
int t,i,j,k,x,y,l,m,n,a[200][200],d[10000],mark[10000];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		
		int flag=0;
		scanf("%d %d",&n,&m);
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=n;j++)
			{
				a[i][j]=0;
			}
			d[i]=0;mark[i]=0;
		}
		for(i=1;i<=m;i++)
		{
			scanf("%d %d",&x,&y);
			if(!a[x][y])
			{
			a[x][y]=1;
			a[y][x]=1;
			d[x]++;
			d[y]++;
			}
		}
		if(n&1)
		printf("NO\n");
		else
		{
		while(1)
		{
	/*	for(i=1;i<=n;i++)
		if(d[i])
		printf("%d %d ,",i,d[i]);
		printf("\n");*/
		int min=99999,pos=0;
		for(i=1;i<=n;i++)
		{
			
			if(d[i]!=0&&min>d[i]&&mark[i]==0)
			{
			min=d[i];
			pos=i;
			}
		}
	//	printf("first %d deg %d\n",pos,min);
		min=99999;
		int pos1=0;
		if(pos)
		for(j=1;j<=n;j++)
		{
			if(a[pos][j]==1&&mark[j]==0)
			{
				if(min>d[j])
				{
					min=d[j];
					pos1=j;
	//				printf("min %d ",min);
				}
			}
		}
	//	printf("second %d deg %d\n",pos1,min);
		if(pos1)
		{
		
			d[pos]=0;
			d[pos1]=0;
			a[pos][pos1]=0;
			a[pos1][pos]=0;
			mark[pos]=1;
			mark[pos1]=1;
			for(i=0;i<=n;i++)
			{
				if(a[i][pos])
				{
					d[i]--;
					a[i][pos]=0;
					a[pos][i]=0;
				}
				if(a[i][pos1])
				{
					d[i]--;
					a[i][pos1]=0;
					a[pos1][i]=0;
				}
			}
		}
		if((pos1==0&&pos!=0)||(pos1==0&&pos==0))
		{	
			flag=1;
			break;
		}
		int l=0;
		for(i=1;i<=n;i++)
		if(!mark[i])
		{
			l=1;
			break;
		}
		if(l==0)
		break;
		}
		l=0;
		for(i=1;i<=n;i++)
		{
		if(!mark[i])
		{
			l=1;
		}
		mark[i]=0;
		}
		if(l) printf("NO\n");
		else printf("YES\n");
		}
	}
	return 0;
}
