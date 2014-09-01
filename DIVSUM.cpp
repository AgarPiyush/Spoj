#include<math.h>
#include<stdio.h>
int main()
{
    long long int i,n,t,sum=1,j=0;
    scanf("%lld",&t);
    long long int e;
	while(t>0)
	{
				sum=1;
				scanf("%lld",&n);
				if(n==1||n==0)
            	printf("0\n");
            	else
            	{
            	long long int w=(long long int)sqrt(n);
				for(e=2;e<=w;e++)
				{
					if(n%e==0)
					{
					long long int s=n/e;
					if(s!=e)
					sum=sum+s+e;
					else 
					sum=sum+s;
					}
            	}
            	
            	printf("%lld\n",sum);
            	}
    		t--;
	
	}
	return 0;
}

