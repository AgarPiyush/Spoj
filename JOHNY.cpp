#include<stdio.h>
long long int a[100000],b[100000],temp[100000],temp2[100000];
void merge(long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(a[ac]<a[bc])
{
temp[cc]=a[ac];
temp2[cc]=b[ac];
cc++;
ac++;
}
else
{
temp[cc]=a[bc];
temp2[cc]=b[bc];
bc++;
cc++;
}
}
while(ac<=mid)
{
temp[cc]=a[ac];
temp2[cc]=b[ac];
cc++;
ac++;
}
while(bc<=u)
{
temp[cc]=a[bc];
temp2[cc]=b[bc];
cc++;bc++;
}
for(i=l;i<cc;i++)
{
a[i]=temp[i];
b[i]=temp2[i];
}
}

void mergesort(long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort(l,mid);
mergesort(mid+1,u);
merge(l,mid,u);
}
}

int main()
{
	long long int i,j,k,l,t,n;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		scanf("%lld",&k);
		b[k-1]=1;
		mergesort(0,n-1);
		for(i=0;i<n;i++)
		if(b[i]==1)
		break;
		printf("%lld\n",i+1);
		b[i]=0;
	}
	return 0;
}

