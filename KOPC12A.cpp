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
#define ll int
#define mod 1000000007
#define getcx getchar_unlocked
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
bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{
	return a.first<b.first;	
}
vector<pair<ll,ll> > a,b;
int main()
{
	ll i,j,k,l,m,n,t;
	finp(&t);
	while(t--)
	{
		a.clear();
		b.clear();
		finp(&n);
		for(i=0;i<n;i++)
		{
			finp(&k);
			a.push_back(make_pair(k,0));
		}
		for(i=0;i<n;i++)
		{
			finp(&k);
			a[i].second=k;
		}
		sort(a.begin(),a.end(),cmp);
		b.push_back(a[0]);
		j=0;
		for(i=1;i<n;i++)
		{
			if(a[i].first==b[j].first)
				b[j].second+=a[i].second;
			else
			{
				b.push_back(a[i]);
				j++;
			}
		}
	
		n=b.size();
		ll ans=0,tot=0;
		
		for(i=0;i<n-1;i++)
		{
			ans=ans+(b[n-1].first-b[i].first)*b[i].second;	
			tot+=b[i].second;	
		}
		ll mi=ans;
		ll last_val=b[n-1].second;
		if(n>=2)
		{
			k=n-2;
			for(i=b[n-1].first-1;i>=b[0].first;i--)
			{
				if(i>=b[k].first)
				{
		
					ans=ans-tot+last_val;
					mi=min(ans,mi);	
					if(i==b[k].first)
					{
						last_val=last_val+b[k].second;
						tot=tot-b[k].second;
						k--;
					}
			
				}
			}
		}
		else
			mi=0;	
		out(mi);
	}
	return 0;
}

