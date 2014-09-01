#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *p;
int main()
{
	
	long long int i,j,k=1,t,l;
	
	scanf("%lld",&t);
	 while(t>0)
	 {
	 	p=(char*)malloc(10000000);
	 	k=1;
	 	scanf("%s",p);
	 	l=strlen(p);
	 	p[l-1]++;
	 	while(p[l-k]==58)
	 		{
	 		p[l-k-1]++;
	 		p[l-k]='0';
	 		k++;
	 		}
	 		if(p[0]=='0')
	 		{
	 			for(i=l-1;i>=0;i--)
	 			{
	 				p[i+1]=p[i];
	 			}
	 			p[0]='1';
	 			l++;
	 		}
	 		k=1;
	 	for(i=0;i<l/2;i++)
	 	{
	 		k=1;
	 	while(p[i]!=p[l-i-1])
	 	{
	 		p[l-i-1]++;
	 		while(p[l-i-k]==58)
	 		{
	 			p[l-i-k-1]++;
	 			p[l-i-k]='0';
	 			k++;
	 		}
		}
		}
		
		printf("%s\n",p);
	 	t--;
	 }
	return 0;
}
	 
