

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
/*        
inline void finp(ll *n)
{
   *n = 0;
    ll ch = getchar_unlocked();
    while(ch < '0' || ch > '9')
    ch = getchar_unlocked();
    while(ch >= '0' && ch <= '9')
    (*n) = ((*n)<<3) + ((*n)<<1) + ch - '0', ch = getchar_unlocked();
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
struct node
{
    ll l;ll r;ll t;ll b;
}m[1000000];
ll i,j,k,l,n,node,a[1000000];

void build(ll node,ll b,ll e)
{
    if(b==e)
    {
       
        m[node].l=a[b];
        m[node].r=a[b];
        m[node].t=a[b];
        m[node].b=a[b];
        return;
    }
    build(2*node,b,(e+b)/2);
    build(2*node+1,(e+b)/2+1,e);
    m[node].t=m[2*node].t+m[2*node+1].t;
    m[node].l=max(m[node].t,max(m[2*node].t,m[2*node].l));
    m[node].r=max(m[node].t,max(m[2*node+1].t,m[2*node+1].r));
    m[node].b=max(m[node].t,max(m[2*node].b,max(m[2*node+1].b,m[2*node].r+m[2*node+1].l)));
}
ll le=0,ri=0,sum=0;
ll query(ll node,ll b,ll e,ll i,ll j)
{
    if(i<=b&&j>=e)
    {
        sum+=m[node].t;
        return m[node].b;
    }
    
    if(j<b||i>e)
        return -LONG_MIN;

    ll temp1=query(2*node,b,(e+b)/2,i,j);
    ll temp2=query(2*node+1,(e+b)/2+1,e,i,j);
    return max(temp1,max(temp2,sum));

}
int main()
{
    inp1(n);
   
    
    for(i=0;i<n;i++)
        inp1(a[i]);
    build(1,0,n-1);
/*  
      for(i=1;i<=13;i++)
    {
        printf("node %lld tot %lld lef %lld rig %lld bes %lld\n",i,m[i].t,m[i].l,m[i].r,m[i].b);
    */
    ll q;
    inp1(q);
    while(q--)
    {
        sum=0;
        le=0;ri=0;
        inp2(i,j);
        printf("%lld\n",query(1,0,n-1,i-1,j-1));
    }
    return 0;
}

 
 


