#include<stdio.h>
long long int b[1000000],a[1000000];
int main()
{
	long long int i,j;
		long long int c=0;
		for(j=1;j<=65536;j++)
		{
		//	long long int ans=5312*7*j;
		//	long long int q=ans/65536;
			long long int ans=340066+j;
			long long int q=ans/65536;
			
			long long int rem=ans-q*65536;
			b[rem]++;
		}
		for(j=0;j<=65536;j++)
		{
			if(b[j]!=0)
			c++;
			b[j]=0;
		}
		printf("%lld \n",c);
	
	return 0;
}
