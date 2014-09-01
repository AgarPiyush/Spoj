#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int t,j=0,i,y,k,x,r,c;
	scanf("%d",&t);
	char *p[2*t];int a[2*t];
	for(i=0;i<(2*t);i++)
	p[i]=(char*)malloc(10000);
	for(y=0;y<(2*t);y++)
	scanf("%s",p[y]);
	for(k=0;k<(2*t);k++)
	strrev(p[k]);
	for(x=0;x<(2*t);x++)
	a[j++]=atoi(p[x]);
	for(r=0;r<j;r=r+2)
	{
	k=a[r]+a[r+1];
		while(k>0)
	{
		 c=k%10;
		if(c!=0)
		printf("%d",c);
		k=k/10;
	}
	printf("\n");
	}
	return 0;
	}
