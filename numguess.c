#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
setlinebuf(stdout);
long long int n,m,s,a[1000000];
char *t;
t=(char*)malloc(1000);
scanf("%lld %lld",&m,&n);
long long int i,j,k=m;
for(i=0;i<=n-m;i++)
a[i]=k++;
scanf("%lld",&s);
scanf("%s",t);
long long int l=0,u=n-m;
while(l<u)
{
if(strcmp(t,"WIN")==0)
break;
else if(strcmp(t,"LOW")==0)
u=s-1;
else
l=s+1;
scanf("%lld",&s);
scanf("%s",t);
}
return 0;
}
