#include<stdio.h>
#include<string.h>
#include<math.h>
char s[10000000];
int main()
{
long long int i,j,sum=1;
long long int t;
scanf("%lld",&t);
if(t>100000)
{
return 0;
}
else
{
while(t>0)
{
sum=1;
scanf("%s",s);
long long int c=1;
long long int l=strlen(s);
if(l>30)
{
break;
}
printf("%lld\n",2<<0);
s[l]='z';
for(i=0;i<l;i++)
{
if(s[i]==s[i+1])
c++;
else
{
sum=sum*(long long int)pow(2,c-1);
c=1;
}
}
printf("%lld\n",sum);
t--;
}
return 0;
}
}




