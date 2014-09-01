#include<stdio.h>
long long int i,j,k;
long long int a[10000][1000];
long long int b[10000000],c=0,flag=0;

long long int temp[10000][1000],temp1[10000000];
void merge1(long long int b[],long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(b[ac]<b[bc])
temp1[cc++]=b[ac++];
else 
temp1[cc++]=b[bc++];
}
while(ac<=mid)
temp1[cc++]=b[ac++];
while(bc<=u)
temp1[cc++]=b[bc++];
for(i=l;i<cc;i++)
b[i]=temp1[i];
}

void mergesort1(long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort1(l,mid);
mergesort1(mid+1,u);
merge1(b,l,mid,u);
}
}



void merge(long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(a[ac][0]<a[bc][0])
{
for(i=0;i<=k;i++)
temp[cc][i]=a[ac][i];
cc++;ac++;
}
else
{
for(i=0;i<=k;i++) 
temp[cc][i]=a[bc][i];
cc++;bc++;
}
}
while(ac<=mid)
{
for(i=0;i<=k;i++)
temp[cc][i]=a[ac][i];
cc++;
ac++;
}
while(bc<=u)
{
for(i=0;i<=k;i++)
temp[cc][i]=a[bc][i];
bc++;cc++;
}
for(i=l;i<cc;i++)
for(j=0;j<=k;j++)
a[i][j]=temp[i][j];
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
long long int t,n;
scanf("%lld",&t);
while(t--)
{
	c=0;
	scanf("%lld %lld",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
		for(i=0;i<n;i++)
	{
		a[i][k]=i;
	}
	//printf("\n");
	mergesort(0,n-1);
	//printf("\n");
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%lld ",a[i][j]);
		}
		printf("\n");
	}
	*/
	for(i=0;i<k;i++)
	scanf("%lld",&a[n][i]);
	
	for(i=n-1;i>=0;i--)
	{
		flag=0;
		if(a[i][0]!=-1)
		{
			if(a[i][0]<=a[n][0])
			{
				for(j=1;j<k;j++)
				{
					if(a[i][j]>a[n][j])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					for(j=0;j<k;j++)
					{
						a[n][j]=a[n][j]-a[i][j];
						a[i][j]=-1;
					}
					b[c++]=a[i][k]+1;
				}
				else
				{
					for(j=0;j<k;j++)
					{
						a[i][j]=-1;
					}
				}
			}
		}
	}
	if(c>0)
	mergesort1(0,c-1);
	printf("%lld\n",c);
	for(i=0;i<c;i++)
	printf("%lld ",b[i]);
	printf("\n");
	
	printf("\n");
	
}
return 0;
}

