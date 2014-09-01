#include<string.h>
#include<stdio.h>
long long int t,a[10000000]={0},i,j,k,l,m,n,o,p;
int main()
{
	a[0]=0;
	a[1]=0;
	for(i=2;i<=1001;i++)
	{
	if(a[i]==0)
	{
	for(j=2;i*j<=1000005;j++)
    a[i*j]++;

	}
	}

	scanf("%lld",&t);
	while(t--)
	{
		p=0;
		scanf("%lld %lld %lld",&m,&n,&k);
		if(k==0&&m==1)
		{
			printf("1\n");
		}
		else if(k==0&&m!=1)
		printf("0\n");
		else
		if(k==1)
		{
			if(m==1)
			m++;
			for(i=m;i<=n;i++)
			if(a[i]==0||a[i]==1)
			{
				printf("%lld ",i);
				p++;
			}
		}
		else
		{
			for(i=m;i<=n;i++)
			if(a[i]==k)
			{
				printf("%lld ",i);
				p++;
			}
		}
		printf("\n%lld\n",p);
	}
	return 0;
}

