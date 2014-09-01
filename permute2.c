#include<stdio.h>
long long int a[1000000],b[1000000];
int main()
{
long long int n;
scanf("%lld",&n);
while(n!=0)
{
long long int i,j,k=0;
for(i=1;i<=n;i++)
scanf("%lld",&a[i]);
for(i=1;i<=n;i++)
b[a[i]]=i;
for(i=1;i<=n;i++)
{
if(a[i]!=b[i])
{
k=1;
break;
}
}
if(k==1)
printf("not ambiguous\n");
else
printf("ambiguous\n");
scanf("%lld",&n);
}
return 0;
}
