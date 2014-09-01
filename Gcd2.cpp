#include<stdio.h>
#include<string.h>
char s[100000];
long long int l,i,j,k,rem,a,t;
long long int gcd(long long int,long long int);
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		rem=0;
		scanf("%lld %s",&a,s);
		if(a==0&&s[0]=='0')
		printf("0\n");
		else if(a==0)
		printf("%s\n",s);
		else if(s[0]=='0')
		{
			printf("%lld\n",a);
		}
		else
		{
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			rem=rem*10+(s[i]-48);
			rem=rem%a;
		}
		long long int g=gcd(a,rem);
		printf("%lld\n",g);
		}
	}
	return 0;
}
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else 
	return gcd(b,a%b);
}
