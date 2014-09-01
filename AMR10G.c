#include<stdio.h>
long long iny i,j,k;
void mergesort(long long int a[][],long long int,long long int);
void merge(long long int a[][],long long int,long long int,long long int);
long long int temp[10000][10000];
void mergesort(long long int a[][],long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(long long int a[][],long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(a[ac][0]<a[bc][0])
{
for(i=0;i<k;i++)
temp[cc][i]=a[ac][i];
cc++;ac++;
}
else
{
for(i=0;i<k;i++) 
temp[cc][i]=a[bc][i];
cc++;bc++;
}
}
while(ac<=mid)
{
for(i=0;i<k;i++)
temp[cc][i]=a[ac][i];
cc++;
ac++;
}
while(bc<=u)
{
for(i=0;i<k;i++)
temp[cc][i]=a[bc][i];
bc++;cc++;
}
for(i=l;i<cc;i++)
for(j=0;j<k;j++)
a[i][j]=temp[i][j];
}




long long int a[10000][100000]
int main()
{
long long int t;
scanf("%lld",&t);
while(t--)
{
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		printf("%lld ",a[i][j]);
		printf("\n");
	}
}
return 0;
}

