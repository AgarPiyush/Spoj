long long int fac(int);
#include<stdio.h>
int main()
{
	long long int t,i,j,max=0;
	scanf("%d",&t);
	while(t>0)
	{
		int z,l;
		scanf("&d",z);
		long long int a[z],fact,mul;
		for(i=0;i<z;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<z;i++)
		mul=mul*a[i];
		for(i=2;i<=mul/2;i++)
		{
			long long int s=fac(i);
			if(mul%s==0)
			{
				if(s>max)
				max=s;
			}
		}
		t--;
	}
	printf("\n%d",max);
}
long long int fac(long long int x)
{
	long long int temp=1,i;
	for(i=1;i<=x;i++)
	temp=temp*i;
	return temp;
}
