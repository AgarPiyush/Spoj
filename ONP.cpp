#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void push(char);
char pop();
void display();
int isfull();
int isempty();

struct stack
{
	char a[100];
	int top;
}s;
void push(char x)
{
	if(!isfull())
	s.a[++(s.top)]=x;
}
char pop()
{
	if(!isempty())
	return (s.a[(s.top)--]);
}
int isfull()
{
	if(s.top>99)
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
/*void display()
{
	int i;
	for(i=0;i<=s.top;i++)
	printf("%d-->",s.a[i]);
	printf("\n");
}*/

int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	s.top=-1;
	int k=1,l,i,n,y=0;
	char *p,*z;
	p=(char*)malloc(50);
	z=(char*)malloc(50);
	scanf("%s",p);
	l=strlen(p);
	for(i=0;i<l;i++)
	{
		if(p[i]=='(')
		push(p[i]);
		if(p[i]>='a'&&p[i]<='z')
		z[y++]=p[i];
		else if(p[i]=='+'||p[i]=='-'||p[i]=='*'||p[i]=='/'||p[i]=='^')
		{
			if(!isempty())
			push(p[i]);
			else
			z[y++]=p[i];
		}
		else if(p[i]==')')
		{
			char c=pop();
			s.top--;
			z[y++]=c;
		}
	}
	printf("%s\n",z);		
	t--;
	}
	return 0;
	}
