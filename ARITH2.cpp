#include<stdio.h>
#include<string.h>
char s[1000000],c;
char a[1000000],d[1000000];
long long int i,j,k,l,m,n,t,b[1000000],e=0,temp=0,sum=0,sum1=0,cal,y=0,w=0;
int main()
{
	char u,o;
	scanf("%lld",&t);
	long long int x=0;
	while(t--)
	{
		o=getchar();
		k=0;
		if(x==0)
		u=getchar();
		x++;
		gets(s);
		l=strlen(s);
		l--;
		sum=sum1=w=e=0;
		for(i=0;i<l;i++)
		{
			if(s[i]>='0'&&s[i]<='9')
			sum=sum*10+(s[i]-48);
			else if(s[i]=='+'||s[i]=='*'||s[i]=='/'||s[i]=='-')
			{
				b[w++]=sum;
				d[e++]=s[i];
				sum=0;
			}
		}
		b[w++]=sum;
		long long int r=1,u=0;
		for(i=0;i<e;i++)
		{
			if(d[i]=='*')
			b[0]=b[0]*b[r++];
			else if(d[i]=='+')
			b[0]=b[0]+b[r++];
			else if(d[i]=='-')
			b[0]=b[0]-b[r++];
			else if(d[i]=='/')
			if(b[r]!=0)
			b[0]=b[0]/b[r++];
		}	
		printf("%lld\n",b[0]);
	}	
return 0;	
}

