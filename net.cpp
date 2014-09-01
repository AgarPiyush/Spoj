//Author: Piyush Agarwal, MNNIT Allahabad
#include<bits/stdc++.h>
using namespace std;
#define inp1(a) scanf("%lld",&a)
#define inp2(a,b) scanf("%lld %lld",&a,&b)
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define ll long long int
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
ll i,j,k,l,m,n,t,a[1000005];
int main()
{
	inp1(t);
	while(t--)
	{
		inp1(n);
		for(i=0;i<n;i++)
			inp1(a[i]);
		sort(a,a+n);
		ll ans=0;
		for(j=1;j<n;j++)
			ans=ans+a[0]+a[j];
		
		printf("%lld\n",ans);
	}
return 0;
}


