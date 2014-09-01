#include<stdio.h>
int main()
{
	long long int i,j,k,l,t,m,n;
	long long int b[10000];
	b[0]=1;
	for(i=1;i<26;i++)
	b[i]=b[i-1]*2;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n<3) printf("No\n");
		else
		{
		if(n%3==0)
		n=n/3;
		if(n%5==0)
		n=n/5;
		if(n%17==0)
		n=n/17;
		if(n%257==0)
		n=n/257;
		if(n%65537==0)
		n=n/65537;
		int flag=0;
		for(i=0;i<=26;i++)
		if(b[i]==n)
		{
			flag=1;
			break;
		}
		if(flag)printf("Yes\n");
		else printf("No\n");
		}
	}
	return 0;
}
