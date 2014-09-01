#include<stdio.h>
#include<string.h>
#include<iostream>
int hash1[10000],hash2[10000];
int main()
{
	long long int t,i,j,k;
	char s[10000],b[10000],p[100000];

	scanf("%lld",&t);
	int o=1;
	char e;
	while(t--)
	{
		if(o==1)
		scanf("%c",&e);
		o++;
		gets(s);
		gets(b);
		
		int l1=strlen(s);
		int l2=strlen(b);
		char s3[10000],s4[10000];
		int l3=0,l4=0;
		for(i=0;i<l1;i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
			s3[l3++]=s[i];
			hash1[s3[l3-1]]++;
			}
			else if(s[i]>='A'&&s[i]<='Z')
			{
				s3[l3++]=s[i]+32;
				hash1[s3[l3-1]]++;
			}
		}
		for(i=0;i<l2;i++)
		{
			if(b[i]>='a'&&b[i]<='z')
			{
			s4[l4++]=b[i];
			hash2[s4[l4-1]]++;
			}
			else if(b[i]>='A'&&b[i]<='Z')
			{
			s4[l4++]=b[i]+32;
			hash2[s4[l4-1]]++;
			}
		}
		//printf("%s\n%s\n",s3,s4);
		int c=0,pos=0,flag1=0,flag=0,flag2=0,odd=0;
	/*	for(i=97;i<=122;i++)
		if(hash1[i]!=0)
		printf("%c %d\n",i,hash1[i]);
		printf("\n");
		for(i=97;i<=122;i++)
		if(hash2[i]!=0)
		printf("%c %d\n",i,hash2[i]);
		printf("\n");*/
		for(i=97;i<=122;i++)
		{
			if((hash1[i]-hash2[i])!=0)
			flag2=1;
			if((hash1[i]-hash2[i])%2==1||(hash2[i]-hash1[i])%2==1)
			{
				c++;
				odd=i;
			}
			if(c>1)
			{
				flag=1;
				break;
			}
		}
		if(flag2==0)
		{
			printf("YES\n");
		}
		else if(flag==1)
		{
			printf("NO LUCK\n");
		}
		else
		{
			int max;
				for(i=97;i<=122;i++)
				if((hash1[i]!=0||hash2[i]!=0))
				{
					if((hash1[i]-hash2[i])>0)
					max=(hash1[i]-hash2[i])/2;
					else
					max=(hash2[i]-hash1[i])/2;
					for(j=1;j<=max;j++)
					printf("%c",i);
				}
				if(odd>0)
				printf("%c",odd);
				for(i=122;i>=97;i--)
				if((hash1[i]!=0||hash2[i]!=0))
				{
					if((hash1[i]-hash2[i])>0)
					max=(hash1[i]-hash2[i])/2;
					else
					max=(hash2[i]-hash1[i])/2;
					for(j=1;j<=max;j++)
					printf("%c",i);
				}
				printf("\n");
		}
		for(i=97;i<=122;i++)
		hash1[i]=hash2[i]=0;
	
	}
	return 0;
}
