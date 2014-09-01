#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char p[100000],*q;
	int t;
	q=(char*)malloc(1000000);
	strcpy(q,p);
	long long int k,n=103993,i=1,g=0,rem;
	i=1;
	n=103993;
	while(i<=(100))
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
return 0;
}
