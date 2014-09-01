#include<stdio.h>
long long int a[105][105];
int main()
{
	long long int i,j,k,l,n,r;
	for(i=0;i<=100;i++)
	a[0][i]=0;
	for(j=1;j<=100;j++)
	a[j][0]=1;
	for(i=1;i<=100;i++)
	a[i][i]=1;
	for(i=2;i<=100;i++)
	for(j=1;j<i;j++)
	a[i][j]=(a[i-1][j-1]+a[i-1][j])%10000007;
	scanf("%lld %lld",&n,&r);
	if(r>n)
	printf("-1\n");
	else if(r==n)
	printf("1\n");
	else
	printf("%lld\n",a[n-1][r-1]);
	return 0;
}
