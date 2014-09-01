#include<stdio.h>
int a[100000],i,j,k,l;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int k=1,m=1,i=0,ind=0,c=0,pos;
		for(m=1;m<=n;m++)
		{
			for(c=1;c<=m;)
			{
				if(k!=1)
				{
					ind++;ind=ind%n;
				}
				k++;
				if(!a[ind])
				{
					c++;
					pos=ind;
				}
			}
			a[pos]=m;
		}
		
	
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
			a[i]=0;
		}
		printf("\n");
	}
	return 0;
}
