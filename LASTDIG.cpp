#include<stdio.h>
int main()
{
	long long int a,b,t,i,l,s[10]={0,1,4,4,2,1,1,4,4,2},j;
	scanf("%lld",&t);
			while(t>0)
			{
			int flag=0;
			scanf("%lld%lld",&a,&b);
			l=1;
			long long int k=a%10;
			if(k!=0)
			{
			if(b%s[k]==0)
			j=s[k];
			else
			j=b%s[k];
			for(i=1;i<=j;i++)
			{
				k=a*l;
				l=k%10;
			}
			}
			if(flag!=1)
			printf("%lld\n",l);
			
			if(a==0&&b==0)
			printf("1\n");
			if(b==0&&a!=0)
			printf("1\n");
			if(a==0&&b!=0)
			printf("0\n");
				t--;
	
			}
	return 0;
}
