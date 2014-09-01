#include<stdio.h>
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[100000];
void mergesort(long long int a[],long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(long long int a[],long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(a[ac]<a[bc])
temp[cc++]=a[ac++];
else 
temp[cc++]=a[bc++];
}
while(ac<=mid)
temp[cc++]=a[ac++];
while(bc<=u)
temp[cc++]=a[bc++];
for(i=l;i<cc;i++)
a[i]=temp[i];
}
long long int a[1000000],r[100000];
int main()
{
	long long int i,j,k,t,n,m,v;
	scanf("%lld",&t);
	for(v=1;v<=t;v++)
	{
		printf("Scenario #%lld:\n",v);
		scanf("%lld %lld",&n,&m);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		mergesort(a,0,n-1);
		long long int d=a[0]/m;
		long long int rem;
		printf("%lld |",d);
		long long int g=0;
		for(i=0;i<n;i++)
		{
		k=a[i]/m;
		if(k==d)
		{
			rem=a[i]%m;
			r[g++]=rem;
		}
		else
		{
			d=k;
			for(j=0;j<g;j++)
			printf(" %lld",r[j]);
			printf("\n");
			printf("%lld |",k);
			g=0;
			i--;
		}
		}
		for(j=0;j<g;j++)
		printf(" %lld",r[j]);
		printf("\n");
		printf("\n");
	}
	return 0;
}

