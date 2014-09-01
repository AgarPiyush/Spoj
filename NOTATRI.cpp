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
}*/

ll i,j,k,l,m,n,t,a[1000000];
int main()
{
	inp1(n);
	while(n!=0)
	{
		for(i=0;i<n;i++)
			inp1(a[i]);
		ll c=0;
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				k=upper_bound(a,a+n,a[i]+a[j])-a;
				if(k<n)
				{
					c=c+n-k;
					if(a[k]==a[i]+a[j])
						c--;
				}
				
		//		printf("%lld %lld pos %lld\n",a[i],a[j],k);
			}
		}
		printf("%lld\n",c);
		inp1(n);
	}
	
	return 0;
}

