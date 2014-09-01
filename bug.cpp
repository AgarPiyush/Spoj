#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *down;
	char c;
	long long int data;
};
struct node *start[10000],*po[10000];
long long int front =0,rear=-1,que[10000];
long long int chk=0;
typedef long long int ll;

void enque(long long int x)
{
	que[++rear]=x;
}
int deque()
{
	return que[front++];
}
void insert(long long int n,long long int m)
{
	int flag=0;
	if(start[n]==NULL)
	{
		start[n]=(struct node*)malloc(sizeof(struct node));
		start[n]->data=n;	
		start[n]->c='Y';	
		struct node *ptr;
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=m;
		ptr->c='Y';
		ptr->down=NULL;
		start[n]->down=ptr;
		po[n]=ptr;
	}
	else
	{
		struct node *p=po[n];
		struct node *ptr;
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->c='Y';
		ptr->data=m;
		ptr->down=NULL;
		p->down=ptr;
		po[n]=ptr;
	}
}

void bfs(long long int x)
{
	long long int flag1=0;
	enque(x);
	while(front!=rear+1)
	{
		long long int y=deque();
		struct node *p=start[y];
		p=p->down;
		while(p!=NULL)
		{
			if(start[y]->c=='R')
			{
			if(start[p->data]->c=='Y')
			{
			start[p->data]->c='B';
			enque(p->data);
			}
			if(start[p->data]->c=='R')
			{
				chk=1;
				break;
			}
			}
			else
			{
			if(start[y]->c=='B')
			{
			if(start[p->data]->c=='Y')
			{
			enque(p->data);
			start[p->data]->c='R';
			}
			if(start[p->data]->c=='B')
			{
				chk=1; 
				break;
			}
			}
			}
			p=p->down;
		}
		if(chk==1)
		{
		//printf("ctl");
		break;
		}
	}
	
}

long long int w=1;
int main()
{
		
		long long int i,j,t,max,x,y,m,n;
		
		scanf("%lld",&t);
		while(t--)
		{
		printf("Scenario #%lld:\n",w);
		w++;
		chk=0;
		front=0,rear=-1;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<=n;i++)
		start[i]=NULL;
		for(i=0;i<m;i++)
		{
		scanf("%lld %lld",&x,&y);
		insert(x,y);
		insert(y,x);
		}
		for(x=1;x<=n;x++)
		{
		if(chk==1)
		{
		break;
		}
		if(start[x]!=NULL&&chk==0&&start[x]->c=='Y')
		{
		front=0;
		rear=-1;
		start[x]->c='R';
		bfs(x);
		}
		}
		if(chk==1)
		printf("Suspicious bugs found!\n");
		else
		printf("No suspicious bugs found!\n");
		}
		
		
		return 0;
}


