#include<stdio.h>
long long int a[10000000];
int main()
{
	long long int d,b,m,diff,pre;
	long long int f,t,i;
	a[1]=2;
	long long int k=2;
	for(i=2;i<=1000000;i++)
	{
		a[i]=a[i-1]+k;
		k++;
	}
	scanf("%lld %lld %lld %lld",&d,&f,&b,&m);
	while(d!=0&&f!=0&&b!=0&&m!=0)
	{
		long long int ans,j,w;
		 ans=b*a[f];
		j=d-ans;
	 w=j-m;
		if(w>=0)
		printf("Farmer Cream will have %lld Bsf to spend.\n",j);
		else
		printf("The firm is trying to bankrupt Farmer Cream by %lld Bsf.\n",-w);
		scanf("%lld %lld %lld %lld",&d,&f,&b,&m);
	}
	return 0;
}
