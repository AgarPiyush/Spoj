#include<stdio.h>
#include<math.h>
long long int a[10000009],fact[1000000],count[1000000];
long long int n,k;
int main()
{
	
	long long int d=0,i,j;
	for(i=3;i<=1000;i=i+2)
	{
		if(!a[i])
		{
			for(j=3;(k=j*i)<=1000009;j=j+2)
			{
				a[k]=i;
			}
		}
	}
	long long int c=0,q=0;
	for(i=2;i<=1000000;i++)
	{
		 c=0,q=0;
		n=i;
		while(!(n&1))
		{
			if(c==0)
			fact[c++]=2;
			n=n/2;
		}
		while(n>1)
		{
			if(a[n]==0)
			{
				if(fact[c-1]!=n)
				fact[c++]=n;
				break;
			}
			else
			{
				if(c==0)
				fact[c++]=a[n];
				else if(fact[c-1]!=a[n])
				fact[c++]=a[n];
				n=n/a[n];
			}
		}
		count[i]=c;
	}
	for(i=0;i<1000000;i++)
	if(count[i]>=6)
	printf("%lld %lld\n",i,count[i]);
	count[1]=count[0]=0;
	long long int t,m;
	scanf("%lld",&t);
	while(t--)
	{
		c=0;
		scanf("%lld %lld %lld",&m,&n,&q);
		for(i=m;i<=n;i++)
		{
			if(count[i]==q)
			c++;
		}
		printf("%lld\n",c);
	}
	return 0;
}


