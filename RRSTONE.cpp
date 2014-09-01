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
ll a[1000000];
int main()
{
	
	ll n,i,k,maxi=LONG_MIN,z=0;
	inp(n);inp(k);
	for(i=0;i<n;i++)
	{
	inp(a[i]);
	if(!a[i])
	z=1;
	maxi=max(maxi,a[i]);
 	}
 	if(!k)
 	{
 	for(i=0;i<n;i++)
 	printf("%lld ",a[i]);
 	printf("\n");
  	}
  	else
  	{
 	for(i=0;i<n;i++)
 	{
 		a[i]=maxi-a[i];
 	}
 	if(k&1)
 	{
 		for(i=0;i<n;i++)
 		printf("%lld ",a[i]);
 		printf("\n");
 	}
 	else
 	{
 		maxi=LONG_MIN;
 		for(i=0;i<n;i++)
 		maxi=max(maxi,a[i]);
 		for(i=0;i<n;i++)
 		printf("%lld ",maxi-a[i]);
 		printf("\n");
 	}
 	
  }
	return 0;
}

