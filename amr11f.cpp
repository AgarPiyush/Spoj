

//Author : Piyush Agarwal
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define inp1(a) scanf("%lld",&a);
#define outl(a) printf("%lld\n",a);
#define out(a) printf("%lld ",a);
#define line printf("\n");
#define FOR(i,b,e) for(i=b;i<=e;i++)
#define mp make_pair
#define pb push_back
#define inp2(a,b) scanf("%lld %lld",&a,&b)
#define getcx getchar_unlocked
#define chkbit(s,b) (s & (1<<b))
#define setbit(s,b) (s | (1<<b))
#define clrbit(s,b) (s &= ~(1<<b))
 
/*inline void finp(ll *a )
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
ll power(ll b,ll e)
{
	ll x=1;
	while(e>0)
	{
		if(e&1)
			x=x*b;
		b=b*b;
		e=e/2;
	}
	return x;
}  
ll gcd(ll a,ll b)
{
    if(b==0)
          return a;
    return gcd(b,a%b);
}
ll t,i,j,k,l,m,n,b[105][105];
vector< pair < pair< pair<ll,ll>,pair<ll,ll> > , ll > >  a;
int main()
{
    inp1(t);
    while(t--)
    {
       
        ll f,o,p,q;
        inp2(n,f);inp1(m);
        for(i=0;i<m;i++)
        {
           ll dis;
           inp2(o,p);inp2(q,k);
           inp1(dis);
           pair<ll,ll> c,d;
           c=mp(o,p);d=mp(q,k);
           a.pb(mp(mp(c,d),dis));
           a.pb(mp(mp(d,c),dis));
        }
        for(i=1;i<=n;i++)
        {
            if(i==n)
            {
                pair<ll,ll> c,d;
                c=mp(i,1);d=mp(1,i);
                a.pb(mp(mp(c,d),1));
                a.pb(mp(mp(d,c),1));
            }
            else
            {
                pair<ll,ll> c,d;
                c=mp(i,1);d=mp(i+1,1);
                a.pb(mp(mp(c,d),1));
                a.pb(mp(mp(d,c),1));
            }
        }
       
        for(ll i=0;i<a.size();i++)
        {
           cout << a[i].first.first.first << ":"<<a[i].first.first.second<<":"<<a[i].first.second.first<<":"<<a[i].first.second.second<<":"<< a[i].second << "\n";
        }
        /*  for(ll i=0;i<a.size();i++)
        {
            for(ll j=0;j<a.size();j++)
            {
                for(ll k=0;k<a.size();k++)
                {
                    pair<ll,ll>q=a[]
                }
            }

        }*/



        inp1(q);
        while(q--)
        {
            ll z,x,c,v;
            inp2(z,x);inp2(c,v);
           
        }
    
    }
    return 0;
}

 
 


