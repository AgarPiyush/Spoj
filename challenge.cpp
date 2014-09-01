#include<stdio.h>
long long int b[1000000],a[1000000],temp1[100000],temp2[100000],temp[100000],cal[1000000];



void merge1(long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(cal[ac]<cal[bc])
{
temp[cc]=cal[ac];
cc++;
ac++;
}
else
{
temp[cc]=cal[bc];
bc++;
cc++;
}
}
while(ac<=mid)
{
temp[cc]=cal[ac];
cc++;
ac++;
}
while(bc<=u)
{
temp[cc]=cal[bc];
cc++;bc++;
}
for(i=l;i<cc;i++)
{
cal[i]=temp[i];
}
}

void mergesort1(long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort1(l,mid);
mergesort1(mid+1,u);
merge1(l,mid,u);
}
}



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
	long long int i,j,t,n,k;
	scanf("%lld",&t);
	while(t--)
	{
		long long int count=0;
		scanf("%lld %lld",&n,&k);
		long long int c[n+1][k+1];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&c[i][0]);
			a[i]=c[i][0];
			for(j=1;j<k;j++)
			scanf("%lld",&c[i][j]);
			b[i]=i;
		}
		
		mergesort(0,n-1);
		for(i=0;i<k;i++)
		scanf("%lld",&c[n][i]);
		/*printf("start\n");
		for(i=0;i<n;i++)
		printf("%lld %lld\n",a[i],b[i]);
		printf("done\n");*/
		for(i=n-1;i>=0;i--)
		{
			int flag=0;
			if(a[i]<=c[n][0])
			{
				for(j=1;j<k;j++)
				{
					if(c[b[i]][j]>c[n][j])
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
				for(j=0;j<k;j++)
				{
					c[n][j]=c[n][j]-c[b[i]][j];
				//	printf("\nc[n][j] is %lld\n",c[n][j]);
				}
				cal[count++]=b[i]+1;
				}
			}
		}
		printf("%lld\n",count);
		if(count>1)
		mergesort1(0,count-1);
		for(i=0;i<count;i++)
		printf("%lld ",cal[i]);
		if(count!=0)
		printf("\n");
		printf("\n");
	}
	return 0;
}
