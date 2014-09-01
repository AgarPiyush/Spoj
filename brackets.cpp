void push(char);
char pop();
int isfull();
int isempty();
void disply();
#include<string.h>
#include<stdio.h>
struct stack
{
	char a[2000];
	long long int top;
}s;
void push(char c)
{
	if(!isfull())
	{
		s.a[++s.top]=c;
	}
}
char pop()
{
	if(!isempty())
	{
		return (s.a[s.top--]);
	}
	else
	s.top--;
}
int isfull()
{
	if(s.top>2000)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(s.top==-1)
	return 1;
	else
	return 0;
}
int main()
{
	char b[2000];
	long long int t=1;
	scanf("%s",&b);
	while(b[0]!='-')
	{
	s.top=-1;
	long long int i,n,e=0,d=0,min=0,sum=0;
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		if(b[i]=='{')
		push(b[i]);
		else
		char y=pop();
		if(s.top<-1)
		break;
	}
	if(s.top!=-1)
	{
	for(i=0;i<n;i++)
	{
		if(b[i]=='{')
		{
			d++;
		}
		else
		{
		e++;
		if(d<e)
		{
		sum++;
		e--;
		d++;
		}
		}
	}
	if(d>=e)
	min=d-e;
	else
	min=e-d;
	if(min%2==0)
	sum=sum+min/2;
	else
	sum=sum+min/2+1;
	}
	printf("%lld. %lld\n",t,sum);
	t++;
	scanf("%s",b);
	}
	return 0;
}
