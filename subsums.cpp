#include<stdio.h>
#include<algorithm>
#include<vector>
typedef long long int ll;
#define getcx getchar_unlocked
void mergesort(long long int a[],long long int,long long int);
void merge(long long int a[],long long int,long long int,long long int);
long long int temp[1000000];
inline void merge(long long int a[],long long int l,long long int mid,long long int u)
{
long long int ac=l,bc=mid+1,cc=l,i;
while(ac<=mid&&bc<=u)
{
if(a[ac]<a[bc])
temp[cc++]=a[ac++];
else 
temp[cc++]=a[bc++];
}
while(ac<=mid)
temp[cc++]=a[ac++];
while(bc<=u)
temp[cc++]=a[bc++];
for(i=l;i<cc;i++)
a[i]=temp[i];
}

inline void mergesort(long long int a[],long long int l,long long int u)
{
long long int mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
inline void fscan(ll *a ) 
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
	
using namespace std;
ll i,n,j,coi=0,k,zero=0,add=0,c=0,a,b,p[100],q[100],r[10000000],t[10000000],s[100],pos1=0,pos2=0;
int main()
{
	fscan(&n);
	fscan(&a);
	fscan(&b);
	for(i=0;i<n;i++) fscan(&s[i]);
	for(i=0;i<n/2;i++)
	p[pos1++]=s[i];
	for(i=n/2;i<n;i++)
	q[pos2++]=s[i];
	ll po1=1<<pos1;
	k=0;
	ll k1=0;
	for(i=0;i<po1;i++)
	{
		add=0;
		for(j=0;j<pos1;j++)
		if(i&1<<j)
		r[i]=r[i]+p[j];
	}
	ll po=1<<pos2;
	for(i=0;i<po;i++)
	{
		add=0;
		for(j=0;j<pos2;j++)
			if(i&1<<j)
			t[i]+=q[j];
	}
	mergesort(t,0,po-1);
	ll low,high,ans=0;
	for(i=0;i<po1;i++)
	{
		low=lower_bound(t,t+po,a-r[i])-t;
		high=upper_bound(t,t+po,b-r[i])-t;
	//	printf("chk %lld %lld %lld\n",low,high,r[i]);
		ans+=high-low;
	}
	printf("%lld\n",ans);
	return 0;
}
