#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char *q,*p;
long long int f[10000],g[100000];
int i;
long long int j;
p=(char*)malloc(100000);
q=(char*)malloc(100000);

while(scanf("%s %s",p,q)!=EOF)
{
long long int m,n,min=0;
m=strlen(p);
n=strlen(q);
for(i=0;i<m;i++)
f[p[i]]++;
for(i=0;i<n;i++)
g[q[i]]++;
for(i=97;i<=122;i++)
{
if(f[i]!=0&&g[i]!=0)
{
if(f[i]>=g[i])
min=g[i];
else
min=f[i];
for(j=0;j<min;j++)
printf("%c",i);
}
}
for(i=97;i<=122;i++)
{
f[i]=0;g[i]=0;
}
printf("\n");
p=NULL;
q=NULL;
p=(char*)malloc(100000);
q=(char*)malloc(100000);
}
}

