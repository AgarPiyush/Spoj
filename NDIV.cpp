#include<stdio.h>
#include<math.h>
long long int r,a[100000],i,l,j,k,n,m,h=0,c=0;
int main()
{
    scanf("%lld %lld %lld",&m,&n,&k);
	r=sqrt(n);	
		for(i=2;i<=r;i++)
		{
			l=m%i;
			l=m-l;
		for(j=l;j<=n;j=j+i)
		{
			if(j>=m&&j!=i)
			{
				a[j-m]++;
				if((j%i==0)&&(j/i)>r)
				{
					a[j-m]++;
				}
			}	
		}
		}
		if(m==1)
		a[0]=-1;
		h=c=0;
		for(i=m;i<=n;i++)
		{
			printf("%lld ",a[c]+2);
			c++;
		}
		h=c=0;
		for(i=m;i<=n;i++)
		{		
			if((a[c]+2)==k)
			h++;
			c++;
		}
		printf("%lld\n",h);
	 return 0;
}



