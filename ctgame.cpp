

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
#define chkbit(s,b) (s & (1<<b))
#define setbit(s,b) (s | (1<<b))
#define clrbit(s,b) (s &= ~(1<<b))
 
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
long long int compute(ll a[],ll len)
{
    stack<ll> s;
    ll area[1005]={0};
    for(ll i=0;i<len;i++)
    {
        while(!s.empty())
        {
            if(a[i]<=a[s.top()])
            {
                s.pop();
            }
            else break;
        }
        ll t;
        if(s.empty())
            t=-1;
        else
            t=s.top();
    //    printf("t is %lld\n",t);
        ll l=i-t-1;
        area[i]=l;
        s.push(i);
    }
    while(!s.empty())
        s.pop();
    for(ll i=len-1;i>=0;i--)
    {
        while(!s.empty())
        {
            if(a[s.top()]>=a[i])
                s.pop();
            else 
                break;
        }
        ll t;
        if(s.empty())
            t=len;
        else
            t=s.top();
        ll l=t-i-1;
        area[i]+=l;
        s.push(i);
    }
    long long int maxi=0;
    for(ll i=0;i<len;i++)
        maxi=max(maxi,(long long int)((area[i]+1)*a[i]));
    return maxi;
}
ll t,i,j,k,l,m,n;
int main()
{
    finp(&t);
    while(t--)
    {
        ll r,c;
	long long int ar=0;
        ll arr[2005]={0};
        finp(&r);
        finp(&c);
        
        for(i=0;i<r;i++)
        {
          
           ll cou=0;
	    while(cou<c)
            {
		char ch;
		scanf("%c",&ch);
                
                    if(ch=='F')
                       arr[cou++]++;
                    else if(ch=='R')
                       arr[cou++]=0;
            }
            ar=max(ar,compute(arr,c));
        }
   
      printf("%lld\n",ar*3);
    }
   return 0;
}

 
 


