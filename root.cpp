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
struct node
{
	double x;
	double y;
	double d;
	double v;
}a[100000];

bool cmp(struct node b,struct node c)
{
	return c.y>b.y;
}
int main()
{
	int n,m,r,o;
	scanf("%d %d %d",&n,&m,&r);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&o);
		a[i].x=0;a[i].y=o;
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++)
		printf("%llf %llf \n",a[i].x,a[i].y);
	return 0;
}

