#include<stdio.h>
long long int ini[1000000],a[1000000];
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[1000000],temp2[1000000];
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
{
temp[cc]=a[ac];
temp2[cc]=ini[ac];
cc++;
ac++;
}
else
{
temp[cc]=a[bc];
temp2[cc]=ini[bc];
bc++;
cc++;
}
}
while(ac<=mid)
{
temp[cc]=a[ac];
temp2[cc]=ini[ac];
cc++;
ac++;
}
while(bc<=u)
{
temp[cc]=a[bc];
temp2[cc]=ini[bc];
cc++;bc++;
}
for(i=l;i<cc;i++)
{
a[i]=temp[i];
ini[i]=temp2[i];
}
}

int main()
{
	long long int i,j,k,l,m,n,t;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld %lld",&ini[i],&a[i]);
		mergesort(a,0,n-1);
		long long int sum=1;
		long long int j=0;
	
		for(i=1;i<n;i++)
		{
			if(ini[i]>=a[j])
			{
			sum++;
			j=i;
			}
		}
		printf("%lld\n",sum);
		t--;
		
	}
	return 0;
}


