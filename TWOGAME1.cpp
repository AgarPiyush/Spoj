#include<stdio.h>
int a[4000][4000],x,y,c=50,z=1;
int mark[4000][4000];
void recur(int x,int y)
{
	z++;
	if(x>500||y>500)
	return ;
	int i,j;
	a[x][y]=1;
	if(mark[x][y])
	return ;
	for(i=x;i<=300;i++)
	{
		for(j=y;j<=300;j++)
		{
			if(a[i][j]&&!mark[i][j])
			{
				
			mark[i][j]=1;
			if(i*2<1000)
			recur(i*2,j);
			if(j*2<1000)
			recur(i,j*2);
			if(i>j)
			recur(i-j,j);
			else
			recur(i,j-i);
			}
		}
	}
	return ;
}
int main()
{
	int i,j,e=5;
	recur(1,1);
	while(1)
	{
	scanf("%d",&e);
	for(i=e;i<=e;i++)
	{
		for(j=1;j<=100;j++)
		{
			if(!a[i][j]) printf("%d %d\n",i,j);
		}
	}
	}
	return 0;
}
