#include<stdio.h>
#include<math.h>
long long int gcd(long long int,long long int);
int main()
{
	long long int i,j,k,l,t;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int w,n,m,d,sum,e;
		scanf("%lld %lld",&m,&d);
		 n=gcd(m,d);
		sum=2;
		if(n==1)
        printf("1\n");
        else
        {
        long long int w=(long long int)sqrt(n);
		for(e=2;e<=w;e++)
		{
			if(n%e==0)
			{
			long long int s=n/e;
			if(s!=e)
			sum=sum+2;
			else 
			sum++;
			}
       	}
        printf("%lld\n",sum);
    	}
		
		t--;
	}
	return 0;
}
long long int gcd(long long int m,long long int n)
{
	if(n==0)
	return m;
	else
	return gcd(n,m%n);
}
