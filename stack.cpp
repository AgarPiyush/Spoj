#include<stdio.h>
void push(int);
int pop();
void display();
int isfull();
int isempty();

struct stack
{
		int a[100];
	int top;
}s;
void push(int x)
{
	if(!isfull())
	s.a[++(s.top)]=x;
}
int pop()
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
void display()
{
	int i;
	for(i=0;i<=s.top;i++)
	printf("%d-->",s.a[i]);
	printf("\n");
}

int main()
{
	s.top=-1;
	int k=1,l,n;
	while(k==1)
	{
		printf("press 1 for push 2 for pop");
		scanf("%d",&l);
		switch(l)
		{
			case 1:
			scanf("%d",&n);
			push(n);
			display();
			break;
			case 2:
			int y=pop();
			printf("pop element %d\n",y);	
			display();
			break;
		}
		printf("press 1 to continue");
		scanf("%d",&k);
	}
}
