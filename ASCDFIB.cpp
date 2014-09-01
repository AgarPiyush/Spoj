#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef long long int ll;
ll b,i,j,k,a1,b1,t,m,n,mod=100000;
int fibo(int n)
{
	ll res,a[2][2]={1,1,1,0},x[2][2]={1,0,0,1},c[2][2]={0};
	while(n>0)
	{
		if(n%2==1)
		{
			int d[2][2]={0};
			for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			for(k=0;k<2;k++)
			d[i][j]+=(x[i][k]*a[k][j])%(mod);
			for(i=0;i<2;i++)
			for(j=0;j<2;j++)
			x[i][j]=d[i][j];
		}
		int c[2][2]={0};
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		for(k=0;k<2;k++)
		c[i][j]+=(a[i][k]*a[k][j])%(mod);
		for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		a[i][j]=c[i][j];
		n=n/2;
	}
	res=(x[0][0]+x[0][1])%(mod);
	return res;
}
ll f[1110000],l,count[1110000];
int main()
{
		scanf("%lld",&t);
		for(l=1;l<=t;l++)
		{
		memset(count,0,sizeof(count));
		ll min=0,k=2;
		printf("Case %d:",l);
		scanf("%lld %lld",&n,&m);
		n=n-3;	
		if((n+3)==1) {a1=0;b1=1;}
		else if((n+3)==2){ a1=1;b1=1;}
		else if((n+3)==3){ a1=1,b1=2;}
		else
		{
		a1=fibo(n);
		b1=fibo(n+1);
		}
		f[0]=a1;f[1]=b1;
		count[a1]=1;count[b1]=1;
		if(a1>b1) min=b1;
		else min=a1;
		for(j=n+2;j<=n+m;j++)
		{
		f[k]=(f[k-1]+f[k-2])%mod;
		if(f[k]<min) min=f[k];
		count[f[k]]++;
		k++;
		}
		ll c=0,max;
		if(m>=100) max=99; else max=m;
		//printf("%d %d\n",min,max);
		if(n+3==2) max--; 
		for(j=min;c<=max;j++)
		{
		if(count[j])
		{
			for(k=1;k<=count[j];k++)
			{
			printf(" %d",j);
			c++;
			}
			count[j]=0;
		}
		}
		printf("\n");
}

	return 0;
}

