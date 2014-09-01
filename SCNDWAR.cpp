#include<string.h>
#include<stdio.h>
char s[1000000];
long long int d[1000000]={0},e[1000000]={0},t,i,j,k,l,m,n,f[1000000];
unsigned long long int sum=0;
int main()
{

	scanf("%lld",&t);
	long long int h;
	for(h=1;h<=t;h++)
	{
		long long int c=0;
		scanf("%s",s);
		l=strlen(s);
		k=0;
		i=0;
		long long int flag=0;
		for(i=0;i<150;i++)
		{
		f[i]=10000;
		e[i]=0;
		}
		for(i=0;i<l;i++)
		{
			e[(int)(s[i])]++;
		}
		long long int max=0;
		for(i=48;i<=122;i++)
		{
			if(e[i])
			max++;
		}
		for(i=0;i<l;i++)
		{
			if(i==0)
				{
					f[i]=1;
					for(j=i+1;j<l;j++)
					{
						if(s[j]==s[i])
						{
							f[j]=1;
						}
				 	}
					flag=1;
				}
				else
				{
					if(f[i]==10000)
					{
					if(flag==1)
					{
						f[i]=k;
						for(j=i+1;j<l;j++)
						{
						if(s[j]==s[i])
						{
							f[j]=k;
						}
						}
						k=k+2;
					}
					else
					{
						f[i]=k;
						for(j=i+1;j<l;j++)
						{
						if(s[j]==s[i])
						{
							f[j]=k;
						}
						}
						k++;
					}
					flag=0;	
					}
				}		
				
		}
		for(i=0;i<70;i++)
		d[i]=0;
		if(max<2)
		max=2;
		d[0]=1;
		for(i=1;i<70;i++)
		d[i]=d[i-1]*max;
		 sum=0;
		j=0;
		for(i=l-1;i>=0;i--)
		sum=sum+(d[j++]*f[i]);
		printf("Case #%lld: %llu \n",h,sum);
		
	}
	return 0;
}
