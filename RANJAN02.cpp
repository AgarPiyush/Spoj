#include<stdio.h>
long long int z=0;
long long int recur(long long int,char,char,char);
int main()
{
	long long int n;
	char s='A',t='B',d='C';
	scanf("%lld",&n);
	long long int f=recur(n,s,t,d);

	printf("%lld\n",f);
	return 0;
}

long long int recur(long long int n,char s,char t,char d)
{
	if(n==1)
	{
	printf("move disk from %c to %c\n",s,d);
	return z;
	}
	recur(n-1,s,d,t);
	z++;
	printf("move disk from %c to %c\n",s,d);
	recur(n-1,t,d,s);
	z++;
	
}
