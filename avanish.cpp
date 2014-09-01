#include <cstdio>
#define ll int
#include <algorithm>
#define getcx getchar_unlocked

using namespace std ;
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

struct building{
    int h,c;
};
struct building b[10002];
int lo,up,n;
long long fun(){
 long long ans,sum=0,E[10002],F[10002],D[10002]={0};
 int i,cur=lo;
 for(i=1;i<=n;i++){
     sum+=(abs(cur-b[i].h)*b[i].c);
     D[b[i].h+1]+=2*b[i].c;
   }
 ans=F[lo]=sum;
 cur=lo-1;sum=0;
 for(i=1;i<=n;i++)
     sum+=(abs(cur-b[i].h)*b[i].c);
   E[lo]=ans-sum;
 for(i=lo+1;i<=up;i++)
 {
     E[i]=E[i-1]+D[i];
     F[i]=F[i-1]+E[i];
     ans=min(ans,F[i]);
 }
 return ans;
}
int main(){
 int i,t;
finp(&t);
 while(t--){
        lo=10010;up=-1;
finp(&n);
   for(i=1;i<=n;i++){
   	finp(&b[i].h);

     lo=min(lo,b[i].h);
     up=max(up,b[i].h);
   }
   for(i=1;i<=n;i++)
   finp(&b[i].c);
  printf("%lld\n",fun());
 }
return 0;
}


