#include<stdio.h>
int main()
{
long long int t;
scanf("%lld",&t);
while(t>0)
{
long long int n,m,a[100][100],b[100][100],c[100][100],i,j,p=0,max=0,sum=0,w;
scanf("%lld %lld",&m,&n);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%lld",&a[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%lld",&b[i][j]);
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%lld",&c[i][j]);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
if(a[i][j]<=b[i][j])
w=a[i][j];
else
w=b[i][j];
long long int r=w*c[i][j];
if(r>max)
max=r;
}
sum=sum+max;
max=0;
}
printf("%lld\n",sum);
t--;
}
return 0;
}
