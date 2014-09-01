#include<stdio.h>
#include<string.h>
long long int i,j,k,l1,l2,c[1000000],d[1000000];
int main()
{
	char a[1000000],b[1000000];
	scanf("%s",a);
	while(a[0]!='#')
		{
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		scanf("%s",b);
		l1=strlen(a);
		l2=strlen(b);
		i=0;
		k=0;
		j=0;
		long long int q=0;
		long long int sum=0;
		for(i=0;i<l1;i++)
		{
			while(b[j]!=a[i])
			{
				j++;
				if(j==l2)
				break;
			}
			if(j<(l2-1))
			{
			sum=sum+30*j;
			k=j;
			}
			else if(j==(l2)&&a[i]!=b[j-1])
			{
				sum=sum+15;
				j=k;
			}
		}
		for(i=j;i<l2;i++)
		sum=sum+30;
		printf("%lld\n",sum);
		scanf("%s",a);
	}
	return 0;
}
