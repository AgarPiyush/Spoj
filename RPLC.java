#include<stdio.h>
int main()
{
    long long int t,q=1;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int a[100000],n,i,sum=0,c=0,j;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=n-1;i>0;i--)
		{
			if(a[i]<0)
			{
				for(j=0;j<=i;j++)
				sum=sum+a[j];
				break;
			}
		}
		c=-sum+1;
		printf("Scenario #%lld: %lld\n",q,c);
		t--;
		q++;
	}
	return 0;
}
