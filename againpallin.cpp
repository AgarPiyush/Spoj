#include<stdio.h>
int main()
{
    int t,z,x=0,i,j;
    scanf("%d",&t);
    int b[100];
    while(t>0)
    {
	scanf("%d",&z);
	for(j=z+1;;j++)
		{
			int c[100],k=0,flag=0;
			int copy=j;
			while(copy>0)
			{
				c[k++]=copy%10;
				copy=copy/10;
			}
			int l,m=k;
			for(l=0;l<=k/2;l++)
			{
				if(c[l]!=c[--m])
				{
					flag=1;
					break;
				}
			}
					if(flag==0)
					{
						b[x++]=j;
						break;
					}
		}
		t--;
	}
	for(i=0;i<x;i++)
	printf("%d",b[i]);
    return 0;
}



