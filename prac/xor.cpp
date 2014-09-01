#include<stdio.h>
typedef long long int ll;
ll a[10010],b[10010],i,n,j,k,l,t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		scanf("%lld",&a[0]);
		int k=1;
		for(i=1;i<n;i++)
		{
			scanf("%lld",&a[k]);
			if(a[k]!=a[k-1])
			{
			b[k-1]=a[k]-a[k-1];k++;
			}
		}
		
		int sum=0,sum1=0,c=1;
		for(i=k-2;i>=0;i--)
		{
				sum1+=c*b[i];
			//	printf("%lld\n",sum1);
				sum+=sum1;
				c++;
		}
		printf("%lld\n",sum);
	}
	
	
	return 0;
}
