#include<stdio.h>
long long int gcd(long long int,long long int);
long long int a[10000000];
long long int gcd(long long int x,long long int y)
{
if(x==0)
return y;
else if(x>y)
return gcd(y,x);
else return gcd(x,y%x);
}
int main()
{
long long int t,i;
scanf("%lld",&t);
while(t>0)
{
long long int n,real=0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
a[i]=i;
for(i=1;i<=n-2;i++)
{
long long int e=0,w=0;
long long int q=gcd(a[i],a[i+1]);
if(q==1)
{
w=gcd(a[i+1],a[i+2]);
if(q==1&&w==1)
{
e=gcd(a[i],a[i+2]);
if(e==1)
real=real+a[i];
}
}
}

printf("%lld\n",real);
t--;
}
return 0;
}

