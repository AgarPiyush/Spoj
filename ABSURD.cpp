#include<stdio.h>
#include<math.h>
long long int a[100000],b[100000];
int main()
{
	long long int u,i,k,d=0,j,l,t;
	scanf("%lld",&t);
	while(t>0)
	{
		d=0;
		long long int n,ab;
		scanf("%lld",&n);
		long long int copy;
		copy=n;
		while(copy>0)
		{
			int rem=copy%10;
			a[d++]=rem;
			copy=copy/10;
		}
		long long int y=0;
		for(i=0;i<d;i++)
		if(a[i]==0)
		y++;
		else
		break;
		long long int p=d-y;
		if(a[i]==5)
		ab=2*p-1;
		else
		ab=2*p;
		long long int w=0,sum=0;
		for(j=i;j<d;j++)
		sum=sum+a[j]*(long long int)pow(10,w++);
		l=(long long int)ceil(sum*.95);
		u=(long long int)sum*1.05;
		long long int flag;
		
		for(j=l;j<=u;)
		{
			
			flag=0;
			long long int ab1,s=0,y=0;
			long long int copy1=j;
			while(copy1>0)
			{
				int rem=copy1%10;
				a[s++]=rem;
				copy1=copy1/10;
			}
			for(i=0;i<s;i++)
			if(a[i]==0)
			y++;
			else
			break;
			p=s-y;
			if(a[i]==5)
			ab1=2*p-1;
			else
			ab1=2*p;
			if(ab1<ab)
			{
				flag=1;
				
				break;
			}
			long long int r=j%5;
			if(j==l)
			j=j+5-r;
			else
			j=j+5;
					
		}
		if(flag==1)
		printf("absurd\n");
		else
		printf("not absurd\n");
		t--;
	}
	return 0;
}
