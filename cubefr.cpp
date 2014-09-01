#include<stdio.h>
long long int j,d,i,t,k,n,a[10000000]={0};
int main()
{
	d=8;
	for(i=2;d<=1000002;)
	{
	a[d]=-2;
	for(j=2;j*d<=1000002;j++)
	a[j*d]=-2;
	i++;
	d=i*i*i;
	}
	k=1;
	for(i=1;i<=1000000;i++)
	if(a[i]==0)
	a[i]=k++;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&n);
		if(a[n]==-2)
		printf("Case %lld: Not Cube Free\n",i);
		else
		printf("Case %lld: %lld\n",i,a[n]);
	}
	return 0;
}
