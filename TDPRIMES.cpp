#include<stdio.h>
int a[100000000];
int main()
{
		long long int m,n,i,j,less;
		for(i=0;i<(100000000);i++)
		a[i]=0;
		for(i=2;(i*i)<=100000000;i++)
		{
			less=m/i;
			less=less*i;
			for(j=less;j<=n;j=j+i)
			{
			if(j>=m&&j!=i)
			a[j-m]=1;
			}
		}
		long long int e=0;
		for(i=0;i<100000000;i++)
		{
		if(a[i]==0&&(m+1)!=1)
		if(i==0&&m==1);
		else
		{
		e++;
		if((e-1)%(100)==0)
		printf("%lld\n",m+i);
		}
		}
	return 0;
}
