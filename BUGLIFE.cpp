#include<stdio.h>
#include<stdlib.h>
struct node *start[100000];
int mark[10000000];
int front =0,rear=-1,que[10000000];
struct node
{
	struct node *down;
	char c;
	int data;
};
void enque(int x)
{
	que[++rear]=x;
}
int deque()
{
	return que[front++];
}
void insert(int n,int m)
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
	}
	else
	{
		struct node *p=start[n];
		while(p->down!=NULL)
		{
		if(p->data==m)
		{
			flag=1;
			break;
		}
		p=p->down;
		}
		if(flag==0)
		{
		struct node *ptr;
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->c='Y';
		ptr->data=m;
		ptr->down=NULL;
		p->down=ptr;
		}	
	}
}
long long int chk=0;
void bfs(int x)
{
	//mark[x]=1;
	enque(x);
	while(front!=rear+1)
	{
		
		int y=deque();
	//	printf("\nque is %d ",y);
		struct node *p=start[y];
		p=p->down;
		while(p!=NULL)
		{
			if(mark[p->data])
			{
				if((start[p->data]->c=='R'&&start[y]->c=='R')||(start[p->data]->c=='B'&&start[y]->c=='B'))
				{
	//				printf("yes");
					chk=1;
					break;
				}
			}
			if(!mark[p->data])
			{
			if(start[y]->c=='R')
			{
			start[p->data]->c='B';
			p->c='B';
			}
			else
			{
			start[p->data]->c='R';
			p->c='R';
			}
			mark[p->data]=1;
			enque(p->data);
			//dis[p->data]=path;
			}
			p=p->down;
		}
		if(chk==1)
		break;
		//path++;
	}
}

int main()
{
		
		int i,j,t,max,x,y,m,n;
		int qq=1;
		scanf("%lld",&t);
		while(t--)
		{
			printf("Scenario #%d:\n",qq);
			qq++;
			chk=0;
		front=0,rear=-1;
		
		scanf("%d %d",&n,&m);
		for(i=1;i<=n;i++)
		{
		mark[i]=0;
		start[i]=NULL;
		}
		for(i=0;i<m;i++)
		{
		scanf("%d %d",&x,&y);
		insert(x,y);
		insert(y,x);
		}
		
	/*	for(i=1;i<=n;i++)
		{
				struct node *p=start[i];
				while(p!=NULL)
				{
					printf("%d ->",p->data);
					p=p->down;
				}
				printf("\n");
				
			
		}*/
		for(x=1;x<=n;x++)
		{
		if(!mark[x]&&chk==0&&start[x]!=NULL)
		{
				front=0,rear=-1;
	
		start[x]->c='R';
		bfs(x);
		}
		}
	/*	for(i=1;i<=n;i++)
		{
				struct node *p=start[i];
				while(p!=NULL)
				{
	//				printf("%d %c->",p->data,p->c);
					p=p->down;
				}
				printf("\n");
				
			
		}*/
		if(chk==1)
		printf("Suspicious bugs found!\n");
		else
		printf("No suspicious bugs found!\n");
		}
		return 0;
}

