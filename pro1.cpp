#include<stdio.h>
#define getcx getchar_unlocked
/*inline void fscan(int *a ) 
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
}*/
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
int m,w,q,stack[1000000],top=-1,start=0,n,i,k=0,ini=0,fin;
unsigned long long int sum=0;
int main()
{
	scanf("%d",&m);
	sum=0;
	while(m--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&stack[++top]);
		k++;
		}
		fin=top;
		if(n!=0)
		{
		mergesort(stack,ini,fin);
		merge(stack,start,ini+1,fin);
		}
	//	for(i=0;i<=top;i++) printf("%d ",stack[i]);
	//	printf("\n");
		w=stack[start++];
		q=stack[top--];
		ini=top;
		sum=sum+q-w;
	}
	printf("%llu\n",sum);
return 0;	
}




