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
#define inp(a) scanf("%d",&a)
#define line(a) printf("%d ",a);
#define next() printf("\n");
#define out(a) printf("%d\n",a)
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
int a[100000],m[1000000];
void segment(int node,int b,int e)
{
	if(b==e)
	{
	m[node]=a[e];
	return;
	}
	else
	{
		segment(node<<1,b,(e+b)>>1);
		segment((node<<1)+1,((e+b)>>1)+1,e);
		if(m[node<<1]>=m[(node<<1)+1])	
		m[node]=m[node<<1];
		else
		m[node]=m[(node<<1)+1];
	}
}
int query(int node,int i,int j,int b,int e)
{
	if(i>e||j<b)
	return INT_MIN;
	if(b>=i&&j>=e)
	return m[node];
	int p1=query((node<<1),i,j,b,((e+b)>>1));
	int p2=query((node<<1)+1,i,j,((e+b)>>1)+1,e);
	return max(p1,p2);
}

int main()
{
	int w,e,n,i,j,k;
	inp(n);
	for(i=0;i<n;i++) inp(a[i]);
	segment(1,0,n-1);
	inp(k);
	while(k--)
	{
		inp(w);inp(e);
		int ans=query(1,w-1,e-1,0,n-1);
		out(ans);
	}
	return 0;
}

