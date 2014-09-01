#include<stdio.h>
#include<string.h>
long long int i,m,n,j,k,l,t;
char s[1000000];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		double inix=0,iniy=0;
		scanf("%lf %lf",&m,&n);
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='U')
			iniy++;
			else if(s[i]=='D')
			iniy--;
			else if(s[i]=='L')
			inix--;
			else inix++;
		}
		double slope1,slope=10000000000;
		if(inix!=0)
		 slope=(iniy)/inix;
		if(n!=0)
		{
			slope1=m/n;
			if(slope1==slope)
			printf("Yes\n");
			else
			printf("No\n");
		}
		else if(slope==10000000000)
		{
			if(n==0)
			printf("Yes\n");
			else
			printf("No\n");	
		}
		
	}
	return 0;
}
