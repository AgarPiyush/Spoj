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
string s1,s2[1000000];
vector < pair <string,ll > > s,c;
ll count1[200][2],pos[10000000],chk[100000];

int main()
{
	cin >>  s1;
	ll l,i;
	l=s1.length();
	for(i=0;i<l;i++)
	{
	s.push_back(make_pair(s1.substr(i),i));
	s2[i]=s[i].first;
	pos[i]=i;
	}
	for(ll t=1;t<=l;t=t<<1)
	{
	ll o=0;
	for(i=0;i<l;i++)
	{
		string k=s2[pos[i]];
		ll d;
		d=k.length();
		if(d>=t)
		{
		count1[k[t-1]][0]++;
		count1[k[t-1]][count1[k[t-1]][0]]=pos[i];
		}
		else
		chk[pos[i]]=1;
	}
	
	for(i=0;i<150;i++)
	{
		for(ll j=1;j<=count1[i][0];j++)
		{
		if(chk[pos[o]]==0)
		{
		pos[o++]=count1[i][j];
		printf("%lld ",pos[o-1]);
		}
		else
		{
			o++;j--;
			chk[pos[o]]=0;
			printf("%lld ",pos[o-1]);
			continue;
		}
		}
	}
	printf("\n");
	for(i=0;i<=150;i++)
	count1[i][0]=count1[i][1]=0;
	}
	return 0;
}

