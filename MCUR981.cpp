#include<stdio.h>
#define l 1000000
long long int i,c=0,k=0,f=9,b[2*l];
int main()
{
	printf("1\n3\n5\n7\n9\n");
	long long int q=1;
	for(i=110;i<=l;i=i+101)
	{
		b[i]=1;
		if(q%10000==0)
		{
			b[i]=0;	b[i-101+166]=1;	i=i-101+166;q++;
		}
		else if(q%1000==0)
		{
			b[i]=0;b[i-101+175]=1;i=i-101+175;q++;
		}
		else if(q%100==0)
		{
			b[i]=0;b[i-101+184]=1;i=i-101+184;q++;
		}
		else if(q%10==0)
		{
			b[i]=0;b[i-101+193]=1;i=i+92;q++;
		}
		q++;
	}
	for(i=100043;i<=l;i=i+100001) b[i]=1;
	q=1;
    for(i=10032;i<=l;i=i+10001)
	{
	    b[i]=1;
	    if(q%10==0)
	    {
	        b[i]=0;b[i-10001+19993]=1;i=i-10001+19993;q++;
	        b[i]=1;
      	}
         q++;
    }
    q=1;
    for(i=20;i<=l;i=i+11)
    {
        b[i]=1;
        if(q%10000==0)
        {
            b[i]=0;b[i-11+52];i=i-11+52;b[i]=1,q++;
        }        
        else
        if(q%1000==0)
        {
                b[i]=0;b[i-11+39];i=i-11+39;b[i]=1,q++;
        }
        else if(q%100==0)
        {
                b[i]=0;b[i-11+26];i=i-11+26;b[i]=1,q++;
        }
        else if(q%10==0)
        {
            b[i]=0;b[i-11+13];i=i-11+13;q++;b[i]=1;
        }
        q++;
    }
    c=4;
    for(i=20;i<=1000000;i++)
    if(b[i]) c++;
	printf("%lld \n",c); 
	return 0;
}

