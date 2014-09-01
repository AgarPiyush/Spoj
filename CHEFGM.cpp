#include<stdio.h>
long long int a[100000],m,n,i,j,k,t;
void bubble()
{
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;
			}
		}
	}
}
double power(long long int e)
{
	long long int x=1,b=2;
	while(e>0)
	{
		if(e%2)
		x=x*b;
		b=b*b;
		e=e/2;
	}
	return (1.0/x);
}
int main()
{
	long long int odd,even;
	scanf("%lld",&t);
	while(t--)
	{
		odd=0,even=0;
		long long int q;
		double x=0,y=0;
		scanf("%lld",&m);
		for(q=0;q<m;q++)
		{
			odd=0,even=0;
			scanf("%lld",&n);
			for(j=0;j<n;j++)
			{
				scanf("%lld",&a[j]);
			}
			bubble();
			long long int pos=0;
			if(a[0]&1)
			{
			odd=1;
			x=x+1;
			}
			else
			{
			y=y+1;
			even=1;
			}
			for(j=1;j<n;j++)
			{
				if((a[j]&1)&&odd==1)
				{
					pos=j;
					x++;
				}
				else if((!(a[j]&1))&&even==1)
				{
					y++;
					pos=j;
				}
				else 
				break;
			}
			long long int count;
			for(j=pos+1;j<n;j++)
			{
					count=j-pos;
					double ans=power(count);
					if(a[j]&1)
					{
					x=x+ans;
					}
					else
					{
					y=y+ans;
					}
			}
	
		}
			if(x==y)
			printf("DON'T PLAY\n");
			else
			{
				if(x>y)
				printf("ODD\n");
				else if(x<y)
				printf("EVEN\n");
			}	
	}
return 0;	
}
