#include<stdio.h>
#include<math.h>
long long int a[10000009],fact[1000000],count[1000000];
long long int n,k;
int main()
{
	
	long long int d=0,i,j;
	for(i=3;i<=3163;i=i+2)
	{
		if(!a[i])
		{
			for(j=3;(k=j*i)<=10000009;j=j+2)
			{
				if(!a[k])
				{
					a[k]=i;
				}
			}
		}
	}
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		//q=0;
		scanf("%lld",&n);
		if(n==1)
		printf("Ordinary Number\n");
		if(n>1)
		{
		long long int e;
		
		e=sqrt(n);
		if(e*e==n)
		printf("Psycho Number\n");
		else
		{
		long long int q=0;
		while(!(n&1))
		{
		if(q==0)
		fact[q++]=2;	
		count[2]++;	
		n=n/2;
		//printf("yes");
		}
		while(n>1)
		{
			if(a[n]==0)
			{
			count[n]++;
			if(fact[q-1]!=n)
			fact[q++]=n;
			
			break;
			}
			else
			{
			count[a[n]]++;
			if(q==0)
			fact[q++]=a[n];
			else if(fact[q-1]!=a[n])
			fact[q++]=a[n];
			n=n/a[n];
			}
		}
		long long int odd=0,even=0;
		for(i=0;i<q;i++)
		{
	//	printf("%lld %lld\n",fact[i],count[fact[i]]);
		if(count[fact[i]]&1)
		odd++;
		else
		even++;
		count[fact[i]]=0;
			fact[i]=0;
		}
		if(odd<even)
		printf("Psycho Number\n");
		else
		printf("Ordinary Number\n");
		}
	}
	}
	return 0;
}


