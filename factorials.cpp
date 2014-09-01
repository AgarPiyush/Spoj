#include<stdio.h>
long long int fac(long long int);
int main()
{
    int t,i,j=0,b[100],c;
    long long int f;
	long long int max=0;
	scanf("%d",&t);
	if(t>0)
	{
	b[t];c=t;
	}
    if(t<11)
    {
	while(t>0)
	{
		int z,l,flag=0;
        long long int mul=1,a[100];
		scanf("%d",&z);
        if(z>0)
	    a[z];
		for(i=0;i<z;i++)
        {
		scanf("%lld",&a[i]);
        if(a[i]<0)
        flag=1;
        }
        if(flag!=1)
        {
		for(i=0;i<z;i++)
		mul=mul*a[i];
		for(i=2;i<=mul/2;i++)
		{
			long long int s=fac(i);
			if(mul%s==0)
			{
				if(s>max)
				max=s;
				f=i;
			}
			if(s>mul)
			break;
		}
        b[j++]=f;
        }
		t--;
		
		max=0;
	}
    if(c>0)
    {
	for(i=0;i<j;i++)
	printf("\n%d",b[i]);
    }
    }
	return 0;
}
long long int fac(long long int x)
{
	long long int temp=1,i;
	for(i=1;i<=x;i++)
	temp=temp*i;
	return temp;
}
