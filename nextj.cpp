#include<stdio.h>
long long int a[1000000];
int main()
{
	long long int i,j,k,l,t,m,n,o,p;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int flag=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=n-1;i>0;i--)
		{
			if((a[i-1]-a[i])<0)
			{
				long long int min=10;
				for(j=i;j<n;j++)
				{
					if(a[j]>a[i-1]&&a[j]<min)
					{
						min=a[j];
						k=j;
					}
				}
				long long int temp;
				temp=a[k];
				a[k]=a[i-1];
				a[i-1]=temp;
				long long int b[15]={0};
				for(j=i;j<n;j++)
				b[a[j]]++;
				for(j=0;j<i;j++)
				printf("%lld",a[j]);
				for(j=0;j<=9;j++)
				if(b[j]>0)
				{
					for(k=0;k<b[j];k++)
					printf("%lld",j);
				}
				printf("\n");
				flag=1;
				break;	
			}
		}
		if(flag==0)
		printf("-1\n");
		
		t--;
	}
	return 0;
}
