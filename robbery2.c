#include<math.h>	
#include<stdio.h>
int main()
{
long long int n,k,t,i;
long long int a[100000];
scanf("%lld",&t);
while(t>0)
{
scanf("%lld %lld",&n,&k);
long long int j=0,sum=0;
i=1;
j=(long long int)(-1+sqrt(1+8*n))/2;
printf("j is %lld\n",j);
long long int g=j/k;
long long int b=j%k;
for(i=1;i<=k;i++)
a[i]=g*(2*i+(g-1)*k)/2;
long long int l=g*k;
for(i=1;i<=b;i++)
{
a[i]=a[i]+l+1;
l++;
}
long long int w=j*(j+1)/2;
long long int left=n-w;
a[b+1]=a[b+1]+left;
for(i=1;i<=k;i++)
printf("%lld ",a[i]);
printf("\n");
t--;
}

return 0;
}
