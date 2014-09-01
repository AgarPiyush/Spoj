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
ll i,j,k,l,n,t,a[1000000],p[100000];
ll m[200005][100];
	
int main()
{
	p[0]=1;
	ll c=0;
	for(i=1;i<=200000;i=i*2)
		p[c++]=i;
	
	inp1(n);
	ll x1,y1,x2,y2;
	inp2(x1,y1);
	for(j=1;j<n;j++)
	{
		inp2(x2,y2);
		m[j-1][0]=abs(x1-x2)+abs(y1-y2);
		x1=x2;
		y1=y2;
	}
	for(j=1;j<=log2(n);j++)
	{
		ll po=p[j];
		for(i=0;i<=n-po-1;i++)
		{
			if(i==1&&j==1)
				printf("here %lld\n",i+p[j-1]);
			m[i][j]=min(m[i][j-1],m[i+p[j-1]][j-1]);	
		}
	}
	
	
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<=log2(n);j++)
			printf("%lld ",m[i][j]);
		printf("\n");
	}
	return 0;
}

