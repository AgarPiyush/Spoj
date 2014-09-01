#include<stdio.h>
long long int a[1000000],b[1000000];
int main()
{
long long int n,i,j,e=0,k,d=0;
scanf("%lld",&n);
long long int copy=n;
while(n>0)
{
scanf("%lld",&b[d++]);
long long int m,k;
scanf("%lld",&m);
for(i=0;i<m;i++)
scanf("%lld",&a[e++]);
n--;
}
k=e;
for(i=0;i<e-1;i++)
for(j=i+1;j<e;j++)
if(a[i]==a[j])
k--;
for(i=0;i<d;i++)
for(j=0;j<e;j++)
if(b[i]==a[j])
{
printf("yes\n");
k--;
break;
}
printf("%lld\n",k+1);
return 0;
}


