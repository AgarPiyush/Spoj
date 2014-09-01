#include<stdio.h>
#include<string.h>
int main()
{
	long long int t,rem,n,i,a[100000],j;
	scanf("%lld",&t);
	while(t>0)
	{
		i=0;
		memset(a,0,sizeof(a));
		scanf("%lld",&n);
		while(n>0)
		{
			rem=n%4;
			if(rem==1)
			a[i++]=2;
			else
			if(rem==2)
			a[i++]=3;
			else
			if(rem==3)
			a[i++]=5;
			else
			if(rem==0)
			{
				a[i++]=7;
				n--;
			}
			n=n/4;
			
		}
		for(j=i-1;j>=0;j--)
		printf("%lld",a[j]);
		printf("\n");
		t--;
	}
	
	return 0;
}
