#include<stdio.h>
#include<string.h>
char a1[10000],a[10000],b1[10000],b[10000];
int s[10000],d[10000],a3[10000],b3[10000],div1[10000],div2[10000];
int main()
{
	long long int i,j,k,l1,l2,m=10,n;
	
	while(m--)
	{
	scanf("%s",a1);
	scanf("%s",b1);
	l1=strlen(a1);
	l2=strlen(b1);
	j=l1-1;
	for(i=0;i<l1;i++)
	a[j--]=a1[i];
	j=l2-1;
	for(i=0;i<l2;i++)
	b[j--]=b1[i];
	long long int c=0;
	for(i=0;i<l2;i++)
	{
		s[i]=((a[i]-48)+(b[i]-48)+c)%10;
		c=((a[i]-48)+(b[i]-48)+c)/10;
	}
	
	for(i=l2;i<l1;i++)
	{	
		s[i]=((a[i]-48)+c)%10;
		c=((a[i]-48)+c)/10;
	}
	s[l1]=c;

	
	
	for(i=0;i<l2;i++)
	{
		d[i]=(a[i]-48)-(b[i]-48);
		if(d[i]<0)
		{
			d[i]=10+d[i];
			if(a[i+1]!='0')
			a[i+1]--;
			else
			{
				k=i+1;
				while(a[k]=='0')
				a[k++]='9';
				a[k]--;
			}
		}	
	}
	for(i=l2;i<l1;i++)
	d[i]=a[i]-48;
	
	
	for(i=l1;i>=0;i--)
	{
		if(s[i]!=0)
		{
			k=i;
			break;
		}
	}
	j=0;
	long long int j1=0;
	for(i=k;i>=0;i--)
	a3[j++]=s[i];
	
	
	for(i=0;i<j;i++)
	{
		if(i==0)
		div1[i]=a3[i]/2;
		else
		{
			div1[i]=(((a3[i-1]%2)*10)+a3[i])/2;
		}
	}
	printf("sum :");
	for(i=0;i<j;i++)
	printf("%d",a3[i]);
	printf("\n");
	for(i=0;i<j;i++)
	{
		if(div1[i]!=0)
		{
			k=i;
			break;
		}
	}
	for(i=k;i<j;i++)
	printf("%d",div1[i]);
	printf("\n");
	
	for(i=l1-1;i>=0;i--)
	{
		if(d[i]!=0)
		{
			k=i;
			break;
		}
	}
	if(i==-1)
	printf("0\n");
	else
	{
	for(i=k;i>=0;i--)
	b3[j1++]=d[i];
/*	for(i=0;i<j1;i++)
	printf("%d",b3[i]);
	printf("\n");*/
	
	for(i=0;i<j1;i++)
	{
		if(i==0)
		div2[i]=b3[i]/2;
		else
		{
			div2[i]=(((b3[i-1]%2)*10)+b3[i])/2;
		}
	}
	
	for(i=0;i<j1;i++)
	{
		if(div2[i]!=0)
		{
			k=i;
			break;
		}
	}
	for(i=k;i<j1;i++)
	printf("%d",div2[i]);
	printf("\n");
	}
	}				
	return 0;
}
