#include<stdio.h>
#include<vector>
#include<string.h>
typedef long long int lli;
using namespace std;
char s[20];
void rank(){
int n = strlen(s);
 
lli factorial[n+1];
factorial[0]=1;
for(int i = 1; i <= n; i++)
factorial[i] = i * factorial[i-1];
 
vector<int> freq(25);
lli den = 1;
lli ret = 0;
for(int i = n-1; i >= 0; i--)
{
int si = s[i]-'0';
freq[si]++;
den *= freq[si];
for(int c = 0; c < si; c++)
if(freq[c] > 0)
ret += factorial[n-i-1]* freq[c]/ (den);
}
printf("%lld\n",ret + 1) ;
}
 
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
scanf("%s",s);
rank();
}
return 0;
}
