#include<stdio.h>
long long int a[1000000];
char b[1000000];
int main()
{
long long int i,j,n,l,k;
scanf("%lld %lld %lld",&l,&k,&n);
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
long long int max=a[0];
for(i=1;i<n;i++)
if(max<a[i])
max=a[i];
for(i=1;i<l;i++)
if(i%2==1)
b[i]='A';
else
b[i]='B';
b[l]='A';
b[k]='A';
for(i=l+1;i<k;i++)
if(b[i-1]=='B'||b[i-l]=='B')
b[i]='A';
else
b[i]='B';
for(i=k+1;i<=max;i++)
if(b[i-1]=='B'||b[i-l]=='B'||b[i-k]=='B')
b[i]='A';
else
b[i]='B';
for(i=0;i<n;i++)
printf("%c",b[a[i]]);
return 0;
}


