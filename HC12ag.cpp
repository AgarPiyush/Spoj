#include<stdio.h>
typedef long long int ll;
ll mod=1000000007;
void mergesort(ll a[],ll,ll);
void merge(ll a[],ll,ll,ll);
ll temp[1000000];
void mergesort(ll a[],ll l,ll u)
{
ll mid=(l+u)/2;
if(l!=u)
{
mergesort(a,l,mid);
mergesort(a,mid+1,u);
merge(a,l,mid,u);
}
}
void merge(ll a[],ll l,ll mid,ll u)
{
ll ac=l,bc=mid+1,cc=l,i;
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

ll mul(ll b,ll e)
{
	ll x=1;
	while(e>0)
	{
		if(e&1)
		x=(x*b)%mod;
		b=(b*b)%mod;
		e=e/2;
	}
	return x;
}


ll comb(ll n,ll r)
{
	
	ll i,pro=n,ans=1,min;
	if(n-r<r)
	min=n-r;
	else min=r;
	for(i=1;i<=min;i++)
	{
		ans=(ans*pro)%mod;
		ans=ans*mul(i,mod-2)%mod;
		pro--;
	}
	return ans;
}

	ll div=1,ans,t,w,p,q,a[1000000],i,res,r,k,l,m,n,sum=0;;
	int main()
	{
	scanf("%lld",&t);
	for(q=1;q<=t;q++)
	{
		sum=0;
		scanf("%lld %lld",&n,&k);
		for(i=0;i<n;i++)
		{
		 scanf("%lld",&a[i]);
		 a[i]=a[i]%mod;
		 sum=(sum+a[i])%mod;
		}
		if(n==1)
		printf("Case #%lld: %lld\n",q,a[0]);
		else
		if(k==1)
		printf("Case #%lld: %lld\n",q,sum);
		else
		{
		sum=0;
		mergesort(a,0,n-1);
		w=comb(n-1,k-1);
		div=1;
		for(i=n-1;i>=k-1;i--)
		{
		p=(a[i]*w)%mod;
		sum=(sum+p)%mod;
		w=(((w*(i-k+1))%mod)*(mul(i,mod-2)))%mod;
		}
		sum=sum;
		printf("Case #%lld: %lld\n",q,sum);
		}
	}
	
	return 0;
}



