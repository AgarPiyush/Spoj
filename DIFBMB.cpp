#include<stdio.h>
long long int a[1000010]={0},b[1000010]={0},i,j,k,l;
int main()
{
	b[1]=2;
	k=2;
	long long int c=1000;
	a[2]=1;
	for(i=3;i<=1001;i=i+2)
	{
		if(a[i]==0)
		{
		for(j=3;j*i<=1000005;j=j+2)
		{
			a[j*i]=1;
		}
		}
	}
	/*for(i=2;i<50;i++)
	if(a[i]==0)
	printf("%lld ",i);
	printf("\n");*/
	long long int t;
	a[1]=1;
	scanf("%lld",&t);
	while(t--)
	{
		long long int m,n;
		scanf("%lld %lld",&m,&n);
		if(m<=2&&n!=1)
		l=1;
		else l=0;
		if(m%2==0)
		m++;
		for(i=m;i<=n;)
		{
			if(a[i]==0)
			{	
				if(i%4==1)
				{
				l++;
				i=i+2;
				
				}
				i=i+2;	
			}
			else
			{
				i=i+2;
			}
		}
		printf("%lld\n",l);
	}
	return 0;
}

