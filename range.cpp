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
ll lazy[1000000],m[1000000];
void update(ll node,ll b,ll e,ll i)
{
	if(i<b||i>e)
		return;
	if(b==e&&b==i)
	{
		m[node]+=b;
		return;
	}
	update(2*node,b,(e+b)/2,i);
	update(2*node+1,(e+b)/2+1,e,i);
	m[node]=m[2*node]+m[2*node+1];
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
	
	if(j<b||i>e)
		return 0;
	if(b>=i&&j>=e)
		return m[node];
	return (query(2*node,b,(e+b)/2,i,j)+query(2*node+1,(e+b)/2+1,e,i,j));

}

int main()
{
	ll n,q;
	inp(n);
	inp(q);
	for(ll i=0;i<q;i++)
	{
		ll p,a,b;
		inp(p);
		inp(a);
		inp(b);
		if(p==0)
		{
			for(ll w=a;w<=b;w++)
			update(1,0,n-1,w);
		}
		else
		{
			printf("%lld\n",query(1,0,n-1,a,b));
		}
	}
	return 0;
}

