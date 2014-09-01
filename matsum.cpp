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
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define swap(a,b) {a=a+b;a=a-b;b=a-b;}
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define ll int
#define mod 1000000007
#define getcx getchar_unlocked

inline void fscan(int *a )
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
}
int bit[1500][1500],i,j,k;
void update(ll x,ll y,ll n,ll sum)
{
	int j=y;
	while(x<=n)
	{
		y=j;
		while(y<=n)
		{
			bit[x][y]+=sum;
			y+=(y&(-y));
		}
		x+=x&(-x);
	}
}
ll read(ll x,ll y)
{
	int ans=0,j=y;
	while(x>0)
	{
		y=j;
		while(y>0)
		{
			ans+=bit[x][y];
			y-=(y&(-y));
		}
		x-=(x&(-x));
	}
	return ans;	
}
int main()
{
	int i,j,k,t,n,x,y,sum;
	char s[100];
	fscan(&t);
	while(t--)
	{
		fscan(&n);
		while(1)
		{
		scanf("%s",s);
		
		if(s[2]=='T')
		{
			fscan(&x);fscan(&y);fscan(&sum);
			update(x+1,y+1,n,sum);
		}
		else 
		if(s[2]=='M')
		{
			int x1,y1;
			fscan(&x);fscan(&y);fscan(&x1);fscan(&y1);
			x++;y++;x1++;y1++;
			printf("%d\n",read(x1,y1)-read(x-1,y1)-read(x1,y-1)+read(x-1,y-1));
		}
		else
		if(s[2]=='D')
		break;
		}
	}
	return 0;
}

