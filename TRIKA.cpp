#include<stdio.h>
long long int a[50][50],b[50][50]={0};
int main()
{
	long long int i,j,r,c,x,y;
	scanf("%lld %lld",&r,&c);
	scanf("%lld %lld",&x,&y);
	x--;
	y--;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%lld",&a[i][j]);
	for(i=y+1;i<c;i++)
	b[x][i]=b[x][i-1]+a[x][i];
	for(j=x+1;j<r;j++)
	b[j][y]=b[j-1][y]+a[j][y];
	for(i=x+1;i<r;i++)
	{
	for(j=y+1;j<c;j++)
	{
		if(b[i][j-1]>b[i-1][j])
		b[i][j]=a[i][j]+b[i-1][j];
		else
		b[i][j]=a[i][j]+b[i][j-1];
	}	
	}
	long long int ans=a[x][y]-b[r-1][c-1];
	if(ans>=0)
	printf("Y %lld\n",ans);
	else 
	printf("N\n");
	return 0;
}
