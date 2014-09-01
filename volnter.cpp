#include<stdio.h>
long long int k,pos[1000000],neg[1000000];
int main()
{
	long long int i,n,m,a=0,b=0;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&k);
		if(k>0)
		pos[a++]=k;
		else
		neg[b++]=(-k);
	}
	long long int sum=0;
	if(n==m)
	{
	for(i=0;i<a;i++)
	sum=sum+pos[i];
	for(i=0;i<b;i++)
	sum=sum+neg[i];
	a--;
	b--;
	}
	else
	{
			while(b>0&&a>0&&m>1)
			{
				if((neg[b-1]+neg[b])>(pos[a-1]+pos[a]))
				{
				sum=sum+neg[b-1]+neg[b];
				b=b-2;
				m=m-2;
				}
				else
				{
				sum=sum+pos[a-1]+pos[a];
				a=a-2;
				m=m-2;
				}
				
			}
				if(a>0)
				{
				while(a>=0)
				{
					sum=sum+pos[a];
					a--;
					m--;
				}
				}
				else
				{
					while(b>0)
					{
					sum=sum+neg[b-1]+neg[b];
					b=b-2;
					m=m-2;	
					}
				}
				if(m>0&&a>0)
				{
					for(i=a;i>=a-m;i--)
					{
					sum=sum+pos[i];
					}
				}
				else if(m>0&&b>0)
				{
					for(i=b;i>=b-m;i--)
					sum=(sum+neg[i]);
					if(m%2==1)
					sum=sum*(-1);
				}
				printf("%lld\n",sum);
	}
	return 0;
}
