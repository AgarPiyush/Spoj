#include<stdio.h>
#include<math.h>
long long int a[100000];
long long int prime(long long int);
int main()
{
	long long int n,i,j,k,l;
	a[1]=30;
	k=31;	
	for(n=2;n<=1000;n++)
	{
		long long int count=0;
		for(l=k;;l++)
		{
			if(l%2==0)
			count=1;
			else 
			count=0;
			for(i=3;i<=l/2;i=i+2)
			{
				if(l%i==0)
				{
					long long int c=prime(i);
					if(c==1)
					count++;
					
					if(count==3)
					break;
				}
			}
			if(count==3)
			{
			a[n]=l;	
			k=l+1;
			break;
			}
		}
	}
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld",&n);
		printf("%lld\n",a[n]);
		t--;
	}
	
	return 0;
}
long long int prime(long long int i)
{
	long long int j,c=1;
	for(j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
		{
			c++;
			break;
		}
	}
	return c;
}
