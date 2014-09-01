#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *p[100],t='a';
	int i=0;
	for(i=0;i<100;i++)
	p[i]=(char*)malloc(100);
	i=0;
	while(t!='\n')
	{
		gets(p[i]);
		i++;
		t=getchar();
		printf("\n hbcds");
	}
	for(int y=0;y<i;y++)
	printf("%s\n",p[y]);
}
