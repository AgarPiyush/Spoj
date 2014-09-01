

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
      
inline void finp(ll *n)
{
   *n = 0;
    ll ch = getchar_unlocked();
    while(ch < '0' || ch > '9')
    ch = getchar_unlocked();
    while(ch >= '0' && ch <= '9')
    (*n) = ((*n)<<3) + ((*n)<<1) + ch - '0', ch = getchar_unlocked();
}
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
    ll mi;
    ll sum;
}m[10000000];



ll i,j,k,l,n,a[1000005];
void build(ll node,ll b,ll e)
{
    if(b==e)
    {
        m[node].mi=a[b];m[node].sum=a[b];return;
    }
    build(2*node,b,(e+b)/2);
    build(2*node+1,(e+b)/2+1,e);
    m[node].sum=m[2*node].sum+m[2*node+1].sum;
    m[node].mi=min(m[2*node].mi,m[2*node+1].mi);
}
void update(ll node,ll b,ll e,ll i,ll val)
{
    if(b==e&&b==i)
    {
        m[node].mi=val;
        m[node].sum=val;
        return;
    }
    if(b>e||i<b||i>e)
        return ;
    if(b==e&&i!=b)
        return;
    update(2*node,b,(e+b)/2,i,val);
    update(2*node+1,(e+b)/2+1,e,i,val);
    m[node].mi=min(m[2*node].mi,m[2*node+1].mi);
    m[node].sum=m[2*node].sum+m[2*node+1].sum;
}
struct node query(ll node,ll b, ll e,ll i,ll j)
{
    if(b>j||i>e)
    {
        struct node o;
        o.sum=0;
        o.mi=LONG_MAX;
        return o;
    }
    if(b>=i&&e<=j)
        return m[node];
    struct node q=query(2*node,b,(e+b)/2,i,j);
    struct node w=query(2*node+1,(e+b)/2+1,e,i,j);
    struct node p;
    if(q.mi==LONG_MAX)
        return w;
    if(w.mi==LONG_MAX)
        return q;
    p.sum=w.sum+q.sum;
    p.mi=min(w.mi,q.mi);
    return p;

}
int main()
{
    inp1(n);
    for(i=0;i<n;i++)
        inp1(a[i]);
    build(1,0,n-1);
    //for(i=1;i<=9;i++)
     //   printf("i %lld sum %lld mi %lld\n",i,m[i].sum,m[i].mi);
    ll q;
    inp1(q);
    while(q--)
    {
        getchar();
       string s;
       cin >> s;
       inp2(j,k);
       if(s[0]=='C')
       {
            struct node p=query(1,0,n-1,j,k);
            printf("%lld\n",p.sum-p.mi);   
       }
       if(s[0]=='G')
       {
      //     printf("grow k %lld el val %lld\n",k,a[k]+j);
            update(1,0,n-1,k,a[k]+j);
            a[k]=a[k]+j;
       }

       if(s[0]=='E')
       {
           if(a[k]-j>=0)
            update(1,0,n-1,k,a[k]-j);
           a[k]=a[k]-j;
       }
    }
   return 0;
}

 

