

//Author : Piyush Agarwal
#include<bits/stdc++.h>
using namespace std;
#define ll int
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
ll size=1000000;
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
    ll count;
}m[1000005];
ll i,j,k,l,n,d[1000000];
vector< pair<ll,ll> > a;
vector< pair< pair<ll,ll>,pair<ll,ll> > > q;
bool cmp(pair< pair<ll,ll> ,pair<ll,ll> > a,pair< pair<ll,ll>,pair<ll,ll> > b)
{
    if(a.first.second!=b.first.second)
        return a.first.second<b.first.second;
    return a.first.first<b.first.first;
}

ll ans[1000000],mark[1000005];
void update(ll node,ll b,ll e,ll pos,ll opt)
{
   // if(opt==1&&pos==1)
    //    printf("co or %lld %lld\n",b,e);

    if(b==e&&b==pos)
    {
    //    if(b==1)
     //       printf("oh yes opt %lld\n",opt);
        if(opt==0)
            m[node].count=1;
        else
        {
      //      printf("count set to zero %lld\n",node);
            m[node].count=0;
        }
        return;
    }
    if(b==e&&b!=pos)    return;
    if(pos<b||pos>e)    return;
    update(2*node,b,(e+b)/2,pos,opt);
    update(2*node+1,(e+b)/2+1,e,pos,opt);
    m[node].count=m[2*node].count+m[2*node+1].count;
}
ll query(ll node,ll b,ll e,ll i,ll j)
{
        if(b>=i&&e<=j)
            return m[node].count;
        if(b>j||i>e)
            return 0;
        return query(2*node,b,(e+b)/2,i,j)+query(2*node+1,(e+b)/2+1,e,i,j);
}
int main()
{
    finp(&n);
    //printf("%d\n",n);
    for(i=0;i<=1000000;i++)
    {
        m[i].count=0;
        mark[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        finp(&j);
    //    printf("%d\n",j);
        a.pb(mp(j,i));
    }
    finp(&l);
    //printf("%d\n",l);
    for(i=0;i<l;i++)
    {

       finp(&j);
      //  printf("%d\n",j);
        finp(&k);
        //printf("%d\n",k);
        q.pb(mp(mp(j-1,k-1),mp(i,0)));
    }
    sort(q.begin(),q.end(),cmp);
    //for(i=0;i<l;i++)
       // printf("%lld %lld\n",q[i].first.first,q[i].first.second);
    ll c=0;
    i=0;j=0;
   // printf("done\n");
    while(c<n+l)
    {
            if(a[i].second<=q[j].first.second&&i<n)
            {
              //  printf("%lld %lld\n",a[i].first,a[i].second);
                  if(mark[a[i].first]==-1)
                  {
     //                 printf("new\n");
                        update(1,0,n,a[i].second,0);
                        mark[a[i].first]=a[i].second;
                  }
                  else
                  {
                        update(1,0,n,mark[a[i].first],1);
       ///                 printf("removed %lld\n",mark[a[i].first]);
            /*              for(int y=1;y<=9;y++)
                                  printf("%lld ",m[y].count);   
                        printf("\nupdatin\n");
          */              update(1,0,n,a[i].second,0);
                        mark[a[i].first]=a[i].second;
                  }
              //    printf("%lld %lld\n",a[i].first,a[i].second);
                  i++;
            }
            else
            {
                //printf("query %lld %lld\n",q[j].first.first,q[j].first.second);
                   ans[q[j].second.first]=query(1,0,n,q[j].first.first,q[j].first.second);
                    j++;
            }
            c++;
           // for(int y=1;y<=9;y++)
             //   printf("%lld ",m[y].count);
         //   printf("\n");
    }
    for(i=0;i<l;i++)
        printf("%d\n",ans[i]);
    /* 
    printf("queries\n");
    for(i=0;i<l;i++)
        printf("%lld %lld\n",q[i].first.first,q[i].first.second);*/
    

   return 0;
}

 
 


