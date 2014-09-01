#include<stdio.h>
int main()
{
	long long int t,i,j,k,n,a[100000],max;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		long long int sum=1;
		if(n==1)
		printf("%lld\n",a[0]);
		else
		{
		max=a[0];
		for(i=0;i<n-1;i++)
		{
			
			if(a[i]>a[i+1])
			{
				a[i]--;
			}
			else
				a[i+1]--;
		}
		printf("%lld\n",sum);
		}
		t--;
	}
}
