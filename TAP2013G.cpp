#include<stdio.h>
void mergesort(int a[],int,int);
void merge(int a[],int,int,int);
int temp[1000000];
void mergesort(int a[],int l,int u)
{
int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(int a[],int l,int mid,int u)
{
 int ac=l,bc=mid+1,cc=l,i;
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
#define getcx getchar_unlocked
inline void fscan(int *a ) 
{
int n=0; int ch = getcx(); int sign = 1;
while(ch < '0' || ch > '9')
{
if(ch == '-') sign=-1; ch = getcx();
}
while(ch >= '0' && ch <= '9')
{
n = (n << 3) + (n << 1) + ch - '0', ch = getcx();
}
*a = n * sign;
}

int a[100005],b[100005];
int main()
{
	int t,i,j,k,n,sum=0;
	fscan(&n);
	for(i=0;i<n;i++)
	fscan(&a[i]);
	for(i=0;i<n;i++)
	fscan(&b[i]);
	mergesort(a,0,n-1);
	mergesort(b,0,n-1);
	j=0;
	for(i=0;i<n&&j<n;i++)
	{
		if(b[j]>a[i])
		{
			sum++;
			j++;
		}
		else 	{
						j++;
						i--;
				}
	}
	printf("%d\n",sum);
	return 0;
}


