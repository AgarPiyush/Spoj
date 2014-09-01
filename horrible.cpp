#include<iostream>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<cmath>
#include<queue>
using namespace std;
#define inp(a) scanf("%lld",&a)
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define swap(a,b) {a=a+b;a=a-b;b=a-b;}
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define ll long long int
#define mod 1000000007
#define getcx getchar_unlocked
/*inline void fscan(ll *a )
{
	ll n=0; int ch = getcx(); int sign = 1;
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
ll c[110000],b[110000],a[110000],i,j,k,l,m;
ll binarysearch(ll s,ll l,ll u)
{
	if(l>u)
	return -99;
	ll mid=(l+u)/2;
	if(b[mid]==s)
	return mid;
	else if(b[mid]>s)
	return binarysearch(s,l,mid-1);
 	else return binarysearch(s,mid+1,u);
}
ll n,opt,q,w,v;
ll read(ll j)
{
	ll sum=0;
	while(j>0)
	{
		sum+=a[j];
		j-=(j&(-j));
	}
	return sum;
}
void update(ll j,ll sum)
{
	while(j<=n)
	{
		a[j]+=sum;
		j+=j&-j;
	}
}

int main()
{
	inp(n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&opt);
		if(opt==0)
		{
			scanf("%lld %lld %lld",&q,&w,&v);
			update(q,v);
			update(w+1,-v);
		}
		else
		{
			scanf("%lld %lld",&q,&w);
			printf("%lld\n",read(w));
			printf("%lld\n",read(w)-read(q-1));	
		}
	}
	
	/*sort(b,b+n);
	for(i=0;i<n;i++)
	printf("%lld ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		ll pos=binarysearch(a[i],0,n-1);
		out(pos);
		c[i]=pos+1;
	}
	for(i=0;i<n;i++)
	printf("%lld ",c[i]);
	printf("\n");*/

	return 0;
}

