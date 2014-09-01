#include<stdio.h>
#include<math.h>
#include<string.h>
long long int gcd(long long int,long long int);
int main()
{
long long int t,i,j,k,l;
scanf("%lld",&t);
while(t>0)
{
	char s[1000];
	memset(s,'0',sizeof(s));
	scanf("%s",s);
	long long int l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='.')
		break;
	}
	if(i==l)
	printf("1\n");
	else
	{
	
	double n;
	sscanf(s,"%lf",&n);
	n=n+0.00005;
	double k;
	k=floor(n);
	double d=n-k;
	long long int a=(long long int)pow(10,l-1-i);
	long long int b=(long long int)(d*a);
	long long int ans=gcd(a,b);
	long long int w=a/ans;
	printf("%lld\n",w);
	}
	
	t--;
}	
}
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	gcd(b,a%b);
}
