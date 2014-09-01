#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fact(int);
int main()
{
	int z,k=0,i;
	char *p[100];
	scanf("%d",&z);
	if(z>0)
	{
		*p[z];
		for(i=0;i<z;i++)
		p[i]=(char*)malloc(200);
	}
	while(z>0)
	{
		long long int n;
		scanf("%lf",&n);
		sprintf(p[k],"%",fact(n));
		z--;
		k++;
	}
	int y;
	for(y=0;y<k;y++)
	printf("\n%s",p[y]);
	return 0;
}
int fact(int n)
{
if(n<=2)
return n;
	else
	return (n*(fact(n-1)));
}
