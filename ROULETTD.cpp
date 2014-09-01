#include<stdio.h>
int a[1002],sum=0,sum1=0,i,j,k,n,c=0,b=0;
int main()
{
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	 int q,w;
	while(scanf("%d %d",&q,&w)!=EOF)
	{
		b=b+q;
		c=c+w;
		b=b%n;
		c=c%n;
		sum=sum+a[b];
		sum1=sum1+a[c];
		if((sum-sum1)>k)
		{
			printf("P1\n");
			break;
		}
		else if((sum1-sum)>k)
		{
			printf("P2\n");
			break;
		}
		else if((sum-sum1)==0)
		{
			printf("BAD LUCK\n");
			break;
		}
	}
}
