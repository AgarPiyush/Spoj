#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char *a,*b;
	a=(char*)malloc(1000000);
	b=(char*)malloc(1000000);
	scanf("%s %s",a,b);
	while(a[0]!='*'&&b[0]!='*')
	{
		long long int i,j,m,n,sum=0,sum1=0,d,max=0,h;
		m=strlen(a);
		n=strlen(b);
		h=0;
		if(m>=n)
		{
		d=m-n;
		while(d!=0)
		{
		for(i=m+1;i>0;i--)
		b[i]=b[i-1];
		d--;
		}
		for(i=0;i<m-n;i++)
		b[i]='0';
		}
		else
		{
		d=n-m;
		while(d!=0)
		{
			for(i=n+1;i>0;i--)
			a[i]=a[i-1];
			d--;
		}
		for(i=0;i<n-m;i++)
		a[i]='0';
		}
		if(strcmp(a,b)>0)
		printf(">\n");
		else if(strcmp(a,b)<0)
		printf("<\n");
		else
		printf("=\n");
		a=(char*)malloc(100000);
		b=(char*)malloc(100000);
		scanf("%s %s",a,b);
	}
	return 0;
}
