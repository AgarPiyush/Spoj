

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
ll i,j,k,l,m,n,a[1000005];
char s[1000000];
int main()
{
   scanf("%s",s);
   getchar();
   while(s[0]!='0'||strlen(s)!=1)
   {
        l=strlen(s);
        int flag=0;
        if(s[0]=='0')
            flag=1;
        for(i=1;i<l;i++)
        {
            if(s[i]=='0'&&(s[i-1]>'2'||s[i-1]=='0'))
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
        ll b[10000]={0};
        if(l>=2)
        {
            if(s[1]!='0')
            {
            if((s[0]=='2'&&s[1]<='6')||(s[0]<'2'))
            {
                b[0]=1;
                b[1]=2;
            }
            else
            {
                b[0]=b[1]=1;
            }
            }
            else
            {
                b[0]=b[1]=1;
            }
            for(i=1;i<l-1;i++)
            {
                
                if(s[i]>'2')
                    b[i+1]=b[i];
                else if(s[i]=='2'&&s[i+1]>'6')
                    b[i+1]=b[i];
                else if(s[i]=='1'&&s[i+1]!='0')
                   b[i+1]=b[i]+b[i-1];
              else if(s[i]=='2'&&s[i+1]<='6'&&s[i+1]!='0')
                    b[i+1]=b[i]+b[i-1];
                else if(s[i+1]=='0')
                    b[i+1]=b[i-1];
                else if(s[i]=='0')
                    b[i+1]=b[i];
             //   printf("%lld %lld %lld\n",i,b[i],b[i+1]);
            }
        }
        else
            b[1]=1;
    printf("%lld\n",b[l-1]);
        }
        else
            printf("0\n");
    scanf("%s",s);
   }
   return 0;
}

 
 


