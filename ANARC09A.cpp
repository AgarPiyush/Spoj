#include<string.h>
#include<stdio.h>
int main()
{
	char b[2000];
	long long int t=1;
	scanf("%s",&b);
	while(b[0]!='-')
	{
	long long int i,n,e=0,d=0,min=0,sum=0;
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(b[i]=='{')
		{
			d++;
		}
		else
		{
		e++;
		if(d<e)
		{
		sum++;
		e--;
		d++;
		}
		}
	}
	if(d>=e)
	min=d-e;
	else
	min=e-d;
	if(min%2==0)
	sum=sum+min/2;
	else
	sum=sum+min/2+1;
		printf("%lld. %lld\n",t,sum);
	t++;
	scanf("%s",b);
	}

	
	return 0;
}
