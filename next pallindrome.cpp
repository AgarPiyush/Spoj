#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
	char *p[10000],q[10000];
	int l[100],flag=0,t,k=0,m,w,u,i;
	printf("cases");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	p[i]=(char*)malloc(1000);
	for(i=0;i<t;i++)
	{
	scanf("%s",p[i]);
	l[k++]=atoi(p[i]);
	}
	for(m=0;m<k;m++)
	{
	for(i=l[m]+1;;i++)
		{
			sprintf(q,"%d",i);
			int z=strlen(q);
			for(w=0;w<=(z/2);w++)
			{
				if(q[w]!=q[--z])
				{
					flag=1;
					break;
				}
			}
				if(flag==0)
				{
					printf("\n%s",q);
					break;
				}
			flag=0;
	}
	flag=0;
		printf("\n");
	}
}
