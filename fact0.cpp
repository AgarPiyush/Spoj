#include<stdio.h>
#include<math.h>
long long int prime(long long int);
int main()
{
	long long int i,k,c,m,n;
	scanf("%lld",&n);
	while(n>0)
	{
		long long int m=(long long int)sqrt(n);
		for(i=2;i<=m;i++)
		{
			c=0;
			if(n%i==0)
			{
				long long int k=n/i;
				if(prime(i)==1)
				{
					while(n%i==0)
					{
					c++;
					n=n/i;		
					}
					printf("%lld^%lld ",i,c);
				}
				
				
				c=0;
				if(k!=i)
				{
				if(prime(k)==1)
				{
					while(n%k==0)
					{
					c++;
					n=n/k;		
					}
					printf("%lld^%lld ",k,c);
				}
				}
				if(n==1)
				break;
			}
		}
		printf("\n");
		scanf("%lld",&n);
	}
	return 0;
}
long long int prime(long long int x)
{
	long long int j,flag=0;
	long long int o=(long long int)sqrt(x);
	for(j=2;j<=o;j++)
	if(x%j==0)
	{
	flag=1;
	break;
	}
	if(flag==0)
	return 1;
	else 
	return 0;
}

