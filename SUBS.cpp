//Author: Piyush Agarwal, MNNIT Allahabad
#include<bits/stdc++.h>
using namespace std;
#define inp1(a) scanf("%d",&a)
#define inp2(a,b) scanf("%lld %lld",&a,&b)
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define ll int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define getcx getchar_unlocked
/*
inline void finp(ll *a )
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
*/
ll i,j,k,l,m,n,t,a[1000000];
string make(string c,ll p)
{
	ll x=c.length();
	string s="";
	ll i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<p;j++)
			s=s+c[i];
	}
	return s;
}
ll cmp(string str,string patt)
{
	ll x=str.length();
	ll y=patt.length();
	ll k=0,i;
	for(i=0;i<x;i++)
	{
		if(str[i]==patt[k])
		{
			k++;
		}
	}
	if(k==y)
		return 1;
	return 0;
}
int main()
{
	inp1(t);
	while(t--)
	{
		string c,d;
		cin >> c >> d;
		ll l1,l2;
		l1=c.length();
		l2=d.length();
		ll e=l2/l1;
		ll b=0;
		while(b<=e)
		{
			ll mid=b+(e-b)/2;
			if(cmp(d,make(c,mid))==1)
				b=mid+1;
			else
				e=mid-1;
		}
		//if(e>0)
			printf("%d\n",e);
		/*else
			printf("0\n");
*/
	}
	return 0;
}

