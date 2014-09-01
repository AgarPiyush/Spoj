#include<stdio.h>
#include<string.h>
char a[100000],b[1000000];
int main()
{
	long long int t1,t2,t3,t4,i,j,k;	
	scanf("%s",a);
	while(a[0]!='#')
	{
		scanf("%s",b);
		long long int l1,l2;
		t1=strlen(a);
		t2=strlen(b);
		t3=t1;
		t4=t2;
		l1=t1;
		l2=t2;
		
		for(i=0;i<l1;i++)
		{
			for(j=i;j<l2;j++)
			{
				if(a[i]==b[j])
				{
					t1--;
					t2--;
					i++;
					
				}
			}
		}
		long long int sum1=(15*t1)+(30*t2);
		
		for(i=0;i<l2;i++)
		{
			for(j=i;j<l1;j++)
			{
				if(b[i]==a[j])
				{
					t3--;
					t4--;
					i++;
				
				}
			}
		}
		long long int sum2=(15*t3)+(30*t4);
			if(sum1>sum2)
		printf("%lld\n",sum2);
		else
		printf("%lld\n",sum1);
		scanf("%s",a);
	}
	return 0;
}
