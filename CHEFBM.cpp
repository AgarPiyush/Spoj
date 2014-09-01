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
ll n,m,p,sum[100000],s[100000][2],flag[100000];
vector < pair <ll,ll> > st;
bool cmp(const pair <ll,ll> q,const pair <ll,ll> w)
{
	if(q.first!=w.first)
	return q.first < w.first;
	else
	return q.second < w.second;
}

int main()
{
	ll i,j;
	inp(n);inp(m);inp(p);
	if(m!=1)
	{
	for(i=0;i<=n;i++)
	sum[i]=m-1;
	ll x,y;
	for(i=0;i<p;i++)
	{
		inp(s[i][0]);inp(s[i][1]);
		st.push_back(make_pair(s[i][0],s[i][1]));
	}
	sort(st.begin(),st.end(),cmp);	
	ll cpy1=1,cpy2=1;
	for(i=0;i<p;i++)
	{
		
		cpy2=1;
		if(!flag[st[i].first])
		{	
			if(st[i].second==m&&m!=1)
	   		sum[st[i].first]++;
	  	 	if(st[i].second==1)
	   		sum[st[i].first]--;
	   		if(i>0&&st[i].second!=m)
	   		{
		   		if(st[i-1].first==st[i].first&&st[i-1].second==st[i].second)
		   		{
		   		cpy1++;
		   		}
				else
				{
					cpy2=1;
					j=i+1;
					if(st[i].second==st[i-1].second+1&&st[i].first==st[i-1].first)
					{
						for(j=i+1;j<p;j++)
						{
							if(st[j].first==st[j-1].first&&st[j].second==st[j-1].second)
							{
								cpy2++;
							}
							else 
							break;
						}
					}
					if(cpy1>=cpy2+1)
					{
					sum[st[i-1].first]=-1;
					flag[st[i-1].first]=1;
					}
					cpy1=1;
				}
	   		}
	   	}
	}
	for(i=1;i<=n;i++)
	printf("%lld\n",sum[i]);
	}
	else
	{
		ll x,y;
		for(i=0;i<=n;i++)
		sum[i]=1;
		for(i=0;i<p;i++)
		{
			
			inp(x);inp(y);
			sum[x]++;
		}
		for(i=1;i<=n;i++)
		printf("%lld\n",sum[i]);
		printf("\n");
	}
	return 0;
}

