#include<string.h>
#include<stdio.h>
char a[100000];
int main()
{
	long long int t,i,j,k;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%s",a);
		long long int l=strlen(a);
		k=l-1;
		long long int flag=0;
		for(i=0;i<l/2;i++)
		if(a[i]!=a[k--])
		{
			flag=1;
			break;
		}
		if(flag==1)
		printf("NO\n");
		else 
		printf("YES\n");
		t--;
	}
	return 0;
}
