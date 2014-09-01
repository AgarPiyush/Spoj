#include<stdio.h>
#include<string.h>
int main()
{
	long long int m,t;
	scanf("%lld",&t);
	while(t>0)
	{
		char a[1000000];
		long long int b;
		scanf("%s",a);
		scanf("%lld",&b);
		long long int l=strlen(a);
		int c=(int)a[l-1]-48;
		if(b==0)
		printf("1\n");
		else
		if((c==1||c==6||c==5||c==0))
		printf("%d\n",c);
		else
		{
			if(c==9)
			{
			if(b%2==0)
			printf("1\n");
			else printf("9\n");
			}
			else
			{
				long long int i,l=1,k,j;
				m=b%4;
				if(m==0)
				j=4;
				else j=m;
				for(i=1;i<=j;i++)
				{
				k=c*l;
				l=k%10;
				}
				printf("%lld\n",l);
			}
		}
		t--;
	}
	return 0;
}
