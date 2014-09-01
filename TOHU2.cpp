#include<stdio.h>
char a[100000];
int main()
{
    long long int i,j,t;
	scanf("%lld",&t);
	while(t>0)
	{
		for(i=1;i<=99;i++)
		scanf("%lld %c",&j,&a[i]);
		for(i=1;i<=99;i++)
		if(a[i]>=97&&a[i]<=122)
		a[i]=a[i]-32;
		char c=a[9];
		for(i=9;i<=100;i=i+9)
		{
		if(c!=a[i])
		{
			j=1;
			break;
		}
		}
		if(j==1)
		printf("NO\n");
		else
		printf("YES\n");	
		t--;
	}
	return 0;
}




