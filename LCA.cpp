#include<iostream>
#include<cstdio>
#include<climits>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<cmath>
#include<queue>
using namespace std;
#define inp(a) scanf("%d",&a)
#define line(a) printf("%d ",a);
#define out(a) printf("%d\n",a)
#define swap(a,b) {a=a+b;a=a-b;b=a-b;}
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define ll int
#define mod 1000000007
#define getcx getchar_unlocked
/*inline void fscan(ll *a )
{
	ll n=0; int ch = getcx(); int sign = 1;
	while(ch < '0' || ch > '9')
	{
	if(ch == '-') sign=-1; ch = getcx();
	}
	while(ch >= '0' && ch <= '9')
	{
	n = (n << 3) + (n << 1) + ch - '0', ch = getcx();
	}
	*a = n * sign;
}*/
struct node
{
	
	struct node *next;
	struct node *parent;
	ll data;
	ll tin;
	ll tout;
};
ll time1=1;
struct node *start[100000],*pos[10000];
void insert(ll x,ll y)
{
	struct node *ptr;
	ptr=(struct node *)malloc(sizeof(struct node));
	ptr->data=y;
	ptr->next=NULL;
	if(start[x]==NULL)
	{
		start[x]=(struct node*)malloc(sizeof(struct node));
		start[x]->data=x;
		start[x]->next=ptr;
		pos[x]=ptr;
		return;
	}
	pos[x]->next=ptr;
	pos[x]=ptr;
}
ll ti,tout,vis[1000000];
void dfs(ll x)
{
	if(start[x]==NULL)
	return;
	vis[x]=1;
	start[x]->tin=time1++;
//	printf("%lld tin %lld\n",start[x],start[x]->tin);
	struct node *ptr=start[x];
	while(ptr!=NULL)
	{
		struct node *p=ptr->next;
		if(p!=NULL&&!vis[p->data])
		{
			p->parent=ptr;
			dfs(p->data);
		}
		ptr=ptr->next;
	}
	start[x]->tout=time1++;
//	printf("%lld tout %lld\n",start[x],start[x]->tout);
}
ll visi[100000];
ll ans;
void LCA(ll root,ll sm,ll bg)
{
	visi[root]=1;
//	printf("%lld  %lld %lld\n",root,start[root]->tin,start[root]->tout);
	if(start[root]->tin<=sm&&start[root]->tout>=bg)
	{
//	printf("here %d ",root);
//	printf("\n");
	ans=root;
	struct node *ptr=start[root]->next;
	while(ptr!=NULL)
	{
//		printf("root next %d\n",ptr->data);
		if(!visi[ptr->data])
		LCA(ptr->data,sm,bg);
		ptr=ptr->next;
	}
	}
}
int main()
{
	ll i,j,k,x,y,l,t,m,n,ch[10000];
	fscan(&t);
	for(k=1;k<=t;k++)
	{
		fscan(&n);
		for(i=1;i<=n;i++) 
		{
		visi[i]=0;	
		start[i]=NULL;
		vis[i]=0;
		ch[i]=0;
		}
		ll r;
		for(i=1;i<=n;i++)
		{
			
			fscan(&m);
			for(j=0;j<m;j++)
			{
			fscan(&y);
		
			ch[y]=1;
			insert(i,y);
			insert(y,i);
			}
		}
		for(i=1;i<=n;i++)
		if(!ch[i])
		{
			r=i;break;
		}
		dfs(r);
		ll q,f=0;
		printf("Case %d:\n",k);
		fscan(&q);
		for(f=1;f<=q;f++)
		{
		for(i=0;i<=n;i++) visi[i]=0;
		fscan(&x);fscan(&y);
		ll sm,bg;
		if(start[x]==NULL) out(x);
		else
		if(start[y]==NULL) out(y);
		else
		{
		if(start[x]->tin<start[y]->tin)
		{
		sm=start[x]->tin;
		bg=start[y]->tout;
		}
		else
		{
		sm=start[y]->tin;
		bg=start[x]->tout;
		}
		LCA(r,sm,bg);
		printf("%d\n",ans);
		}
		}
	}
	return 0;
}




