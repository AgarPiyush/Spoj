#include<stdio.h>
#include<math.h>
int main()
{
	int t,i,k,copy,b[10000],c[10000];
	scanf("%d",&t);
	int a[2*t];
	for(i=0;i<(2*t);i++)
	scanf("%d",&a[i]);
	int sum=0,n=0,m=0,y;
	i=0;
	int d=0,d1=0,w=0,j=0;
	while(sum<(2*t))
	{
		int copy=a[i++];
		while(copy!=0)
		{ 
		b[m++]=copy%10;
		copy=copy/10;
		}
		int s=m-1;
		for(y=0;y<m;y++)
		w=w+(b[y]*pow(10,s--));
		int copy1=a[i++];
		while(copy1!=0)
		{ 
		c[n++]=copy1%10;
		copy1=copy1/10;
		}
		int q=n-1;
		for(y=0;y<n;y++)
		j=j+(c[y]*pow(10,q--));
		sum=sum+2;
		int u=w+j;
		while(u>0)
		{
			if(u%10!=0)
			printf("%d",u%10);
			u=u/10;
		}
		printf("\n");
		j=0;w=0;m=0;n=0;
		b[10000];c[10000];
	}
}
