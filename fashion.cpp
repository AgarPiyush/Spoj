#include<stdio.h>
int main()
{
	int t,i,z=0,s[1000],flag;
	scanf("%d",&t);
	while(t>0)
	{
	int c,sum=0;
	scanf("%d",&c);
	int m[c],n[c];
	for(i=0;i<c;i++)
	scanf("%d",&m[i]);
	for(i=0;i<c;i++)
	scanf("%d",&n[i]);
	int j;
	for(i=0;i<c;i++)
	{
		for(j=0;j<c-i-1;j++)
		{
			if(n[j]>n[j+1])
			{
				int tem=n[j];
				n[j]=n[j+1];
				n[j+1]=tem;
			}
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<c-i-1;j++)
		{
			if(m[j]>m[j+1])
			{
				int tem=m[j];
				m[j]=m[j+1];
				m[j+1]=tem;
			}
		}
	}
	for(i=0;i<c;i++)
	sum=sum+(m[i]*n[i]);
	s[z++]=sum;
	t--;
	}
	if(flag!=1)
	for(i=0;i<z;i++)
	printf("%d\n",s[i]);
	return 0;

}
