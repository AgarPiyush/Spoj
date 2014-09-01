#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000];
	long long int i,j,k,l,m,n,t;
	scanf("%s",s);
	while(s[0]!='-')
	{
		int a[100000];
		l=strlen(s);
		if(l==1)
		{
			if(s[0]=='0')
			printf("0\n");
			else
			printf("1\n");
			
		}
		
		else
		{
		
		for(i=1;i<l;i++)
		{
			a[i]=(((s[i-1]-48)*10)+s[i]-48)/9;
			s[i]=(((s[i-1]-48)*10)+s[i]-48)-a[i]*9+48;
		//	printf("%d %d\n",a[i],s[i]);
		}
		if(s[i-1]>48&&l>1)
		{
			/*for(i=1;i<l;i++)
			printf("%d",a[i]);
			printf("\n");*/
			a[i-1]++;
			if(a[i-1]==10)
			{
				k=l-1;
				while(a[k]==10)
				{
					a[k]=0;
					a[k-1]++;
					k--;
				}
				if(a[1]==0)
				{
					for(i=l-1;i>=1;i--)
					a[i+1]=a[i];
					a[1]=1;
					l++;
				}
			}
		}
		for(i=1;i<l;i++)
		{	
		printf("%d",a[i]);
		a[i]=0;
				}
		printf("\n");
	}
	scanf("%s",s);
	}
	return 0;
}
