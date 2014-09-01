#include<stdio.h>
#include<string.h>
char c[10000000],d[10000000];
char a[10000000],b[10000000];
char m[100000005];
long long int l1,l2,temp,i,t,j,k,l,n;
int main()
{
    memset(m,'0',sizeof(m));
	scanf("%lld",&t);
	while(t--)
	{
		
		scanf("%s",c);
		scanf("%s",d);
		l1=strlen(c);
		l2=strlen(d);
		if(c[0]=='0'||d[0]=='0')
		printf("0\n");
		else
		{
		
		
		long long int pro,l=0,ff=0,v=1,w;
		for(i=l2-1;i>=0;i--)
		{
			for(j=l1-1;j>=0;j--)
			{
				pro=((c[j]-48)*(d[i]-48))+l;
				pro=pro+(m[ff]-48);
				m[ff++]=(pro%10)+48;
				l=pro/10;
				w=ff;
			}
			if(l>0)
			{
				k=((m[ff]-48)+l)%10;
				m[ff++]=k+48;
				if(ff>w)
				w=ff;
			}
			ff=v;
			v++;
			l=0;
		}
		for(i=w-1;i>=0;i--)
		{
		printf("%c",m[i]);
		m[i]='0';
		}
		printf("\n");
	}
	}
	return 0;
}

