#include<stdio.h>
long long int count=0,a[100000],b[100000],p=1000000000+7,rem[1000000];

long long int mod()
{
	long long int a=2,x=1,i;
	for(i=0;i<count;i++)
	{
		if(rem[i])
		x=(x*a)%p;
		a=(a*a)%p;
	}
	return x;
}

int main()
{
	long long int t,i,j,k,l,m,n;j;
	scanf("%lld",&t);
	while(t--)
	{
		count=0;
		scanf("%lld",&n);
		j=0;
		while(n>0)
		{
			a[j++]=n%2;
			n=n/2;
		}
		int o=0;
		for(i=j-1;i>=0;i--)
		b[o++]=a[i];
		l=j;
		int pos=0,div=0;
		//printf("outside");
		while(l>18)
		{
			rem[count++]=b[j-1]%2;
			for(i=0;i<j;i++)
			{
				if(i==0)
				a[i]=b[i]/2;
				else
				{
					a[i]=((b[i-1]%2)*10+b[i])/2;
				}
			}
			if(a[pos]==0)
			{
				pos++;
				l--;
			}
			//printf("inside");
			for(i=0;i<j;i++)
			b[i]=a[i];		
		}
		long long int ans=0;
		/*for(i=0;i<j;i++)
		printf("%lld",b[i]);
		printf("\n");
		*/
		for(i=0;i<j;i++)
		ans=ans*10+b[i];
	//	printf("%lld\n",ans);
		while(ans>0)
		{
			rem[count++]=ans%2;
			ans=ans/2;
		}
		/*for(i=count-1;i>=0;i--)
		printf("%d",rem[i]);
		printf("\n");*/
		ans=mod();
		printf("%lld\n",(ans*ans)%p);
	}
}
