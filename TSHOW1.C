#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long int n,t,i,j,l,k;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int a[100000],b[100000];
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		scanf("%lld",&n);
		if(n==1)
		printf("5\n");
		else if(n==2)
		printf("6\n");
		else
		{
		long long int dig=(long long int)log2(n+1);
		long long int sum=0;
		for(i=0;i<dig;i++)
		b[i]=5;
		long long int div=(long long int)pow(2,dig);
		long long int mod=((n+1)%div);
	
		i=0;
		long long int rem;
		while(mod>0)
		{
			rem=mod%2;
			a[i++]=rem;
			mod=mod/2;
		}
	
		long long int max;
		max=i-1;

		if(max>=0)
		{
		for(i=0;i<=max;i++)
		b[i]=a[i]+b[i];
		for(i=dig-1;i>=0;i--) 
		printf("%lld",b[i]);
		}
		else
		for(i=0;i<dig;i++)
		printf("%lld",b[i]);
		printf("\n");
		}
		t--;
	}
	return 0;
}
