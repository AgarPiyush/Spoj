#include<stdio.h>
int main()
{
	int t,c,d,e,f,h,i,j,n,m,x;
	int a[100][100];
	int b[100][100];
	
		scanf("%d %d",&n,&m);
		
	/*	if(n>0&&m>0)
		{
			a[n][m];
			b[n][m];
		}
	*/	
		for(c=0;c<n;c++)
		{
			for(d=0;d<m;d++)
			{
				scanf("%d",&x);
				a[c][d]=x;
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(i==0)
				{
					b[i][j]=a[i][j];
				}
				else if(j==0)
				{
					if((b[i-1][j])<(b[i-1][j+1]))
					{
						b[i][j]=b[i-1][j]+a[i][j];
					}
					else
					{
						b[i][j]=b[i-1][j+1]+a[i][j];
					}
				}
				else if(j==m-1)
				{
					if((b[i-1][j])<(b[i-1][j-1]))
					{
						b[i][j]=b[i-1][j]+a[i][j];
					}
					else
					{
						b[i][j]=b[i-1][j-1]+a[i][j];
					}
				}	
				else
				{
					if(((b[i-1][j])<(b[i-1][j-1]))&&((b[i-1][j])<(b[i-1][j+1])))
					{
						b[i][j]=b[i-1][j]+a[i][j];
					}
					else if((b[i-1][j-1])<(b[i-1][j+1]))
					{
						b[i][j]=b[i-1][j-1]+a[i][j];
					}
					else
					{
						b[i][j]=b[i-1][j+1]+a[i][j];
					}
				}
			}
		}
		
		for(f=0;f<m-1;f++)
		{
			if(b[n-1][f]<b[n-1][f+1])
			e=b[n-1][f];
			else
			e=b[n-1][f+1];
		}
		
		printf("%d\n",e);
		return 1;
}
	
