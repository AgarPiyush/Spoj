#include<stdio.h>
long long int a[10000009];
long long int n,k;
int main()
{
	
	long long int d=0,i,j;
	for(i=3;i<=3163;i=i+2)
	{
		if(!a[i])
		{
			for(j=3;(k=j*i)<=10000009;j=j+2)
			{
				if(!a[k])
				{
					a[k]=i;
				}
			}
		}
	}
	
/**	for(i=3;i<=500;i=i+2)
	{
		if(a[i]==0)
		printf("%lld %lld\n",i,i);
		else
		printf("%lld %lld %lld\n",i,b[i][0],b[i][1]);
	}*/
	while(scanf("%lld",&n)!=EOF)
	{
		printf("1");
		if(n>1)
		{
		while(!(n&1))
		{
		printf(" x 2");
		n=n/2;
		//printf("yes");
		}
		while(n>1)
		{
		
			if(a[n]==0)
			{
			printf(" x %lld",n);
			break;
			}
			else
			{
			printf(" x %lld",a[n]);
			n=n/a[n];
			}
		}
		}
		printf("\n");
	}
	return 0;
}

