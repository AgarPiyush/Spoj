#include<stdio.h>
void mergesort(long int a[],long int,long int);
void merge(long int a[],long int,long int,long int);
long int temp[100000];
void mergesort(long int a[],long int l,long int u)
{
long int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(long int a[],long int l,long int mid,long int u)
{
long int ac=l,bc=mid+1,cc=l,i;
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
long int popsmall();
long int poplarge();
int m;
long int w,q,stack[10000000],top=-1,start=0,n,i,k=0;
unsigned long long int sum=0;
int main()
{
	scanf("%d",&m);
	sum=0;
	while(m--)
	{
		scanf("%ld",&n);
		for(i=0;i<n;i++)
		{
		scanf("%ld",&stack[++top]);
		k++;
		}
		if(n!=0)
		mergesort(stack,start,top);
		w=popsmall();
		q=poplarge();
		sum=sum+q-w;
	}
	printf("%llu\n",sum);
return 0;	
}
long int popsmall()
{
	return stack[start++];
}
long int poplarge()
{
	return stack[top--];
}
