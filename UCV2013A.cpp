#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int n,l;
	scanf("%llu %llu",&n,&l);
	while(n!=0&&l!=0)
	{
		unsigned long long int j,k,i;
		long long int sum=n;
		for(i=2;i<=l;i++)
		{
			long long int p=1;
			long long int a1=n%1000000007;
			long long int b=i;
			while(b>0)
			{
				if(b%2==1)
				{
				p=p*a1;
				p=p%1000000007;	
				}
				b=b/2;
				a1=(a1*a1)%1000000007;
			}	
			sum=sum+p;
			sum=sum%1000000007;
		}
		sum=sum%1000000007;
		printf("%lld\n",sum);
		scanf("%llu %llu",&n,&l);	
	}
	return 0;
}
