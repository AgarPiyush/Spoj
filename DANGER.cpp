#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[100000];
	long long int i,j,k,l;
	scanf("%s",s);
	while(s[0]!='0'||s[1]!='0')
	{
	long long int n=(s[0]-48)*10+(s[1]-48);
	char t=s[3];
	k=(long long int)t-48;
	
	l=(long long int)pow(10,k);

	n=n*l;
	long long int k=(long long int)(log2(n));
	long long int j=(long long int)pow(2,k);
	long long int h=n-j;
	h=2*h;
	h=h+1;

	printf("%lld\n",h);	
	scanf("%s",s);
	}
	return 0;
}
