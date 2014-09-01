#include<stdio.h>
#include<stdlib.h>
float a[100000];
int main()
{
	float d,l;
	char *s[10000];
	long long int i,j,t,n;
	scanf("%lld",&t);
	while(t>0)
	{
		float sec,max,min,e,k,f,sum=0,r,d;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		s[i]=(char*)malloc(50);
		for(i=0;i<n;i++)
		scanf("%s %f",&s[i],&a[i]);
		/*for(i=0;i<n;i++)
		printf(" %f ",a[i]);*/
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1-i;j++)
			{
				if(a[j]>a[j+1])
				{
					float temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(i=n-1;i>0;i--)
		{
			d=a[i]-a[i-1];
			if(d>sum)
			{
				sum=d;
			}
		}
		k=a[n-1]-a[0];
		f=360-sum;
		if(f<k)
		e=f;
		else
		e=k;
		r=(12*e);
		r=r+0.999;
		long long int q=(long long int)r;
		printf("%lld\n",q);
		t--;
	}
	return 0;
}
