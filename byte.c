#include<stdio.h>
int main()
{
	int t,c,d,e,f,h,i,j,n,m,q;
	int a[100][100]={0};
	int b[100][100]={0};
	scanf("%d",&t);
	
	for(h=0;h<t;h++)
	{
		scanf("%d %d",&n,&m);
			for(c=0;c<n;c++)
		{
			for(d=0;d<m;d++)
			{
				scanf("%d",&a[c][d]);
			}
		}
		
		for(q=0;q<m;q++)
		{
	b[0][q]=a[0][q];			
		}
			
		for(i=1;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(j==0)
				{			if((b[i-1][j])>(b[i-1][j+1]))
					{
			b[i][j]=b[i-1][j]+a[i][j];
					}
					else
															b[i][j]=b[i-1][j+1]+a[i][j];
					}
				}
				if(j==m-1)
				{
		if((b[i-1][j])>(b[i-1][j-1]))
										b[i][j]=b[i-1][j]+a[i][j];
					}
					else
					{
		b[i][j]=b[i-1][j-1]+a[i][j];
					}
				}	
				else
								if((b[i-1][j]>b[i-1][j-1])&&(b[i-1][j]>b[i-1][j+1]))
					{	
	b[i][j]=b[i-1][j]+a[i][j];
					}					else if(b[i-1][j-1]>b[i-1][j+1])
					{
		b[i][j]=b[i-1][j-1]+a[i][j];
					}
					else
									b[i][j]=b[i-1][j+1]+a[i][j];
					}
				}
			}
		}
		
		e=0;
		for(f=0;f<m;f++)
		{
			if(b[n-1][f]>e)
			e=b[n-1][f];
		}
		
		printf("%d\n",e);
	}
	return 1;
}
