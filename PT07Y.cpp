#include<stdio.h>
#include<stdlib.h>
struct node *start[100000];
int mark[100000],edge[100000],dis[100000],a[100000];
int front =0,rear=-1,que[1000];
struct node
{
	struct node *down;
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
		struct node *ptr;
		ptr=(struct node*)malloc(sizeof(struct node));
		ptr->data=m;
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
		ptr->data=m;
		ptr->down=NULL;
		p->down=ptr;
		}	
	}
}
void bfs(int x)
{
	int path=1;
	mark[x]=1;
	enque(x);
	while(front!=rear+1)
	{
		
		int y=deque();
	//	printf("\nque is %d ",y);
		struct node *p=start[y];
		p=p->down;
		while(p!=NULL)
		{
			if(!mark[p->data])
			{
			mark[p->data]=1;
			enque(p->data);
			dis[p->data]=path;
			}
			p=p->down;
		}
		path++;
	}
}

int main()
{
		
		int i,j,ch=1,max,x,y,n,m;
		for(i=0;i<=10010;i++)
		start[i]=NULL;
		scanf("%d %d",&n,&m);
		for(i=0;i<m;i++)
		{
	//	printf("enter two values\n");
		scanf("%d %d",&x,&y);
		a[x]=1;
		a[y]=1;
		if(x>y&&x>max)
		max=x;
		else if(y>x&&y>max)
		max=y;
		insert(x,y);
		insert(y,x);
		}
		for(i=0;i<max;i++)
		{
			if(a[i]==1)
			{
				struct node *p=start[i];
				while(p!=NULL)
				{
//					printf("%d->",p->data);
					p=p->down;
				}
	//			printf("\n");
				
			}
		}
		
		bfs(x);
		int flag=0;
		for(i=0;i<=max;i++)
		{
			if(a[i]==1&&mark[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("YES\n");
		else
		printf("NO\n");
		return 0;
}
