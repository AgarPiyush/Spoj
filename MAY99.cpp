#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000000];
	long long int rem,i,j,k,n,t;
	scanf("%lld",&t);
	while(t>0)
	{
		memset(a,'0',sizeof(a));
		i=0;
		scanf("%lld",&n);
		while(n>0)
		{
			 rem=n%5;
			 switch(rem)
			 {
			 case 0:
			 a[i++]='u';
			 n--;
			 break;
			 case 1:
			 a[i++]='m';
			 break;
			 case 2:
			 a[i++]='a';
			 break;
			 case 3:
			 a[i++]='n';
			 break;
			 case 4:
			 a[i++]='k';
			 
			 break;
			}
			n=n/5;
		}
		for(j=i-1;j>=0;j--)
		printf("%c",a[j]);
		printf("\n");
		t--;
	}
	return 0;
}
