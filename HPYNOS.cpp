#include<stdio.h>
int main()
{
		long long int a[100000],n,i,j,rem,pro=0,d=0,g=0,flag=0;
		scanf("%lld",&n);
		long long int copy=n;
		if(n>=2&&n<=2147483647)
		{
		while(pro!=1)
		{
			a[g++]=copy;
			pro=0;
			while(copy>0)
			{
				rem=copy%10;
				pro=pro+(rem*rem);
				copy=copy/10;
			}
			d++;
			copy=pro;
			for(i=0;i<g;i++)
			{
				if(copy==a[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			break;
		}
		for(i=0;i<g;i++)
		printf("%lld\n",a[i]);
			if(flag==0)
			printf("%d\n",d);
			else
			printf("-1\n");
		}
		return 0;
}
