#include<stdio.h>
#include<string.h>
long long int gcd(long long int,long long int);
char s[1000000];
long long int a[1000000],b[1000000];
int main()
{
	long long int i,j,t;
	scanf("%s",s);
	while(s[0]!='*')
	{
		
		long long int k=0,j=0,flag=0;
		long long int l=strlen(s);
		for(i=0;i<l;i++)
		if(s[i]=='Y')
		a[k++]=i+1;
		else
		b[j++]=i+1;
		long long int ans=a[0];
		long long int pro=a[0],lcm=a[0];
		for(i=1;i<k;i++)
		{
			ans=gcd(lcm,a[i]);
			pro=lcm*a[i];
			if(pro>=ans)
			lcm=pro/ans;
			else
			lcm=ans/pro;
		}
		for(i=0;i<j;i++)
		{
			if(lcm%b[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("-1\n");
		else
		printf("%lld\n",lcm);
		scanf("%s",s);
	}
	return 0;
}
long long int gcd(long long int a,long long int b)
{
	if(b == 0)
	return a;
	else
	return gcd(b, a % b);
}

