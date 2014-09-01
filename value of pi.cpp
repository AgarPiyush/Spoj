#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char p[100000],*q,a[100000];
	int t;
	q=(char*)malloc(1000000);
	strcpy(q,p);
	long long int k,n=103993,i=1,g=0,rem;
	scanf("%d",&t);
	while(t>0)
	{
		i=1;
		n=103993,
	scanf("%lld",&k);
	if(k!=0)
	{
	while(i<=(k+1))
	{
		 int div=n/33102;
		sprintf(p,"%d",div);
		strcat(q,p);
		if(i==1)
		strcat(q,".");
		rem=n%33102;
		n=rem*10;
		i++;
	}
	printf("%s\n",q);	
	}
	else
	printf("3\n");
	t--;
	q=(char*)malloc(1000000);
	strcpy(q,a);
	}
	return 0;
}
