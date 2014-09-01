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
ll t;
int recur(ll i,ll f,ll sum,ll a[],ll b[])
{
	if(i==f)
	{
		if(sum+a[i]==0||sum+b[i]==0)
		return 0;
		return 1;
	}
	ll k= recur(i+1,f,sum+a[i],a,b);
	ll p= recur(i+1,f,sum+b[i],a,b);
	if(k==0||p==0)
		return 0;
	else return 1;
}
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		string s;
		cin >> s;
		ll l=s.length();
		ll sum=0;
		for(ll i=0;i<l;i++)
			sum=sum+s[i]-48;
		ll rem=sum%4;
		
		if(rem%2==0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

