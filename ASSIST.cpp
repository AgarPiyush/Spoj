#include<stdio.h>
long long int a[100000],b[10000];
int main()
{
	a[0]=0;
	long long int i,j,k,n,t=0,d=1;
	int c=0;
	scanf("%lld",&n);
	for(i=3;i<=34000;i=i+2)
	{
		c=0;
		if(a[i]==0)
		{
			b[d++]=i;
		for(j=i+2;j<=34000;j=j+2)
		{
				if(a[j]==0)
				{
				c++;
				if(c%i==0)
				a[j]=1;
				}
		}
		}
	}
	b[0]=2;
	while(n!=0)
		{
		printf("%lld\n",b[n-1]);
		scanf("%lld",&n);	
		}
	return 0;
}
