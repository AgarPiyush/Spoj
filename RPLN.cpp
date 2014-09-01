#include<stdio.h>
long long int a[1000000],m[1000000],i,j,k,l,n;
void segment(long long int node,long long int b,long long e)
{
	if(b==e)
	{
	m[node]=b;
//	printf("%lld\n",node);
	}
	else
	{
		segment(2*node,b,(e+b)/2);
		segment(2*node+1,((e+b)/2)+1,e);
		if(a[m[2*node]]>a[m[2*node+1]])
		m[node]=m[2*node+1];
		else
		m[node]=m[2*node];
	}
}
long long int query(long long int node,long long int i,long long int j,long long int b,long long int e)
{
	if(i>e||j<b)
	return 10000000000;
	if(b>=i&&j>=e)
	return a[m[node]];
	long long int p1=query(2*node,i,j,b,(e+b)/2);
	long long int p2=query(2*node+1,i,j,(e+b)/2+1,e);
	if(p1==10000000000)
	return p2;
	if(p2==10000000000)
	return p1;
	if(p1>p2)	
	return p2;
	else
	return p1;
}
int main()
{
	long long int t,c,d,f=1;
	scanf("%lld",&t);
	while(t--)
	{
		printf("Scenario #%lld:\n",f);
		f++;
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		segment(1,0,n-1);
		for(i=0;i<k;i++)
		{
			scanf("%lld %lld",&c,&d);
			long long int ans=query(1,c-1,d-1,0,n-1);
			printf("%lld\n",ans);
		}
	}
}
