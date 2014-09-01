#include<stdio.h>
int main()
{
long long int n,i,j;
scanf("%lld",&n);

long long int k=1,a[100][100];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a[i][j]=k++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%lld ",a[i][j]);
}
printf("\n");
}
return 0;
}
