#include<stdio.h>
long long int a[1000000];
int main()
{
long long int n,m,j,sum=0,max=0,flag=0;
long long int i,g=0;
scanf("%lld%lld",&n,&m);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<n;i++)
{
		sum=sum+a[i];
		if(sum<=m&&sum>max)
		{
		max=sum;
		if(max==m)
		break;
		}
		else
		{
		 while(sum>m)
		{
		sum=sum-a[g++];
		if(sum<=m&&sum>=max)
		{
		max=sum;
		if(max==m)
		{
			flag=1;break;
		}
		break;
		}
		}
		}
		if(flag==1)
		break;
}
printf("%lld\n",max);
return 0;
}

