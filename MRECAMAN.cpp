#include<stdio.h>
int a[10000000],b[10000000];
int main()
{
	int i,k,j,l;
	a[0]=0;
	a[1]=1;
	b[0]=1;
	b[1]=1;
	for(i=1;i<=500001;i++)
	{
		if(((a[i-1]-i)>0)&&b[(a[i-1]-i)]==0)
		{
		a[i]=a[i-1]-i;
		b[a[i-1]-i]=1;
		}
		else
		{
		a[i]=a[i-1]+i;
		b[a[i-1]+i]=1;
		}
	}
	int n;
	scanf("%d",&n);
	while(n!=-1)
	{
		printf("%d\n",a[n]);
		scanf("%d",&n);
	}
	return 0;
}
