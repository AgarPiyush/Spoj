#include<stdio.h>
long long int a[10000000],f[10000000],b[10000000];
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[1000000];
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


int main()
{
	long int i,j,l,m,n;
	f[0]=0;
	f[1]=1;
	f[2]=2;
	for(i=3;i<=34;i++)
	{
	f[i]=f[i-1]+f[i-2];
	a[f[i]]=f[i];
	}
	f[35]=f[34]+f[33];
	j=4;
	a[0]=0;
	a[1]=1;
	a[2]=2;
	i=4;
	long long int c=0,t;
	l=3;
	while(j<=f[34])
	{
	double k=f[l+1]-f[l];
	double t=k/2.0;
	double c=1;
	while(c<t)
	{
		a[i]=f[l];
		c++;
		i++;
		j++;
 	}
	while(c<k)
	{
		a[i]=f[l+1];
		c++;
		i++;
		j++;
	}
	if(c==k)
	{
		a[i]=f[l+1];
		i++;
		j++;
	}
	l++;		
	}
	for(i=j;i<=10000000;i++)
	a[i]=f[34];
	scanf("%lld",&n);
	while(n!=0)
	{
		for(i=0;i<n;i++)
		scanf("%lld",&b[i]);
		mergesort(b,0,n-1);
		for(i=0;i<n;i++)
		printf("%lld ",a[b[i]]);
		printf("\n");
		scanf("%lld",&n);
	}
	
	return 0;
}
