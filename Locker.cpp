#include<stdio.h>
#include<math.h>
long long int sum=1,i,j,k,n,t,mod=1000000007;
long long int  modExp(long long int b, long long int e, long long int m)
{
long long int remainder;
long long int x = 1;
while (e != 0)
{
remainder = e % 2;
e= e/2;

if (remainder == 1)
x = (x * b) % m;
b= (b * b) % m; // New base equal b^2 % m
}
return x;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		sum=1;
		scanf("%lld",&n);
		if(n==1)
		printf("1\n");
		else
		{
		if(n%3==1)
		{
		sum=sum*4;
		n=n-4;
		}
		else 
		if(n%3==2)
		{
			sum=sum*2;
			n=n-2;
		}
		k=n/3;
		long long int ans=modExp(3,k,mod);
		sum=(sum*ans)%mod;
		printf("%lld\n",sum);
		}
	}
	return 0;
}

