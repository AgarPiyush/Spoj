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
#include<map>
#include<cmath>
#include<queue>
#include<utility>
#include<fstream>

using namespace std;


#define out(a) printf("%d\n",a)
#define in(a)  scanf("%d",&a)
#define in2(a,b)  scanf("%d%d",&a,&b)
#define in3(a,b,c)  scanf("%d%d%d",&a,&b,&c)
#define inll(a) scanf("%lld",&a)
#define in2ll(a,b)scanf("%lld%lld",&a,&b);
#define in3ll(a,b,c)scanf("%lld%lld%lld",&a,&b,&c);
#define outll(a) printf("%lld\n",a)
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define VP vector<pair<int,int> >
#define ll long long int
#define MOD 1000000007
#define MP make_pair
#define X first
#define Y second
#define PB push_back

ll  gcd(ll a,ll b)
{
	while(b)
		b^=a^=b^=a%=b;
	return a;
}

ll power(ll b,ll e)
{
	ll ans=1,temp;
	while(e>0)
	{
		if(e%2)
			ans=(ans*b);
		b=(b*b);
		e/=2;
	}
	return ans;
}



//#define n 150000
/*
inline void inp(int *n)
{
	*n = 0;
	int ch = getchar_unlocked();
	while(ch < '0' || ch > '9')
	{
		ch = getchar_unlocked();
	}
	while(ch >= '0' && ch <= '9')
	(*n) = ((*n)<<3) + ((*n)<<1) + ch - '0', ch = getchar_unlocked();
}*/

/*
bool comp(const pair<int,int>& p,const pair<int,int> &q){
	
	if(p.X==q.X)return p.Y<q.Y;
	return p.X<q.X;
	}*/

/*bool comp(const node &x,const node &y){
	return x.a<y.a;
	}*/
/*
bool comp(int i,int j){
	return i>j;
	}*/

int main(){


	int t;
	in(t);
    int ma;
	while(t--){

		int n,m,h,count=0,total=0;
		in3(n,m,h);
		int arr[100000]={0};
		int hash[100000]={0};
        int hash2[100000]={0};
		for(int i=0;i<m;i++){
			in(arr[i]);
			if(!hash[arr[i]])total++;
			hash[arr[i]]++;
    	}
    	for(int i=0;i<=n;i++)
    		hash2[hash[i]]++;
    		
         ma=hash2[1];
        for(int i=1;i<5;i++)
            printf("%d ",hash2[i]);
            printf("\n");
		for(int i=2;i<=m;i++)
        {
            if(hash2[i]>ma)
                ma=hash2[i];
		
		}

		//	printf("total=%d\n",total);
		//	printf("count=%d\n",count);
		if(total>h)printf("-1\n");
		else printf("%d\n",ma);

	   
	}
	
	return 0;
}

