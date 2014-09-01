#include<stdio.h>
long long int p[10000010],a[10000010]={0},i,j,k;
int main()
{
    long long int c=1;
	a[2]=2;
	a[3]=3;
	p[1]=0;
	p[2]=2;
	p[3]=5;
	k=1;
	for(i=2;i<=10000001;i++)
	{
		for(j=1;i*j<10000001;j++)
		{
			
			if(a[i*j]==0)
			a[i*j]=i;
			if(j==1)
			j=i-1;
		}
		p[i]=p[i-1]+a[i];
	}
	long long int t,n;
	scanf("%lld",&t);
	while(t>0)
	{
        scanf("%lld",&n);
    
		printf("%lld\n",p[n]);
		t--;
	}
	return 0;
}

