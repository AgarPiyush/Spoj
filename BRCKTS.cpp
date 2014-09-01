#include<stdio.h>
#include<string.h>
char s[40000],c;
int a[1000000][2],i,j,k,l,m,n,max=0;
void segment(int node,int b,int e)
{
	if(b==e)
	{
		if(s[e]=='(')
		{
			a[node][0]=0;
			a[node][1]=1;
		}
		else if(s[e]==')')
		{
			a[node][0]=1;a[node][1]=0;
		}
		if(node>max) max=node;
		return;
	}
	segment(2*node,b,(e+b)/2);
	segment(2*node+1,(e+b)/2+1,e);
	a[node][0]=a[node*2][0];a[node][1]=a[node*2+1][1];
	if(a[2*node][1]>a[2*node+1][0])
	a[node][1]=a[node][1]+a[2*node][1]-a[2*node+1][0];
	else
	a[node][0]=a[node][0]+a[2*node+1][0]-a[2*node][1];
}
int o=0;
void update(int node,int b,int e,int pos)
{
	//printf("node %d b %d e %d pos %d\n",node,b,e,pos);
	if(pos>e||b>pos)
	{
		return;
	}
	if(e==b)
	{
		o=1;
		if(s[pos]=='(')
		{
		s[pos]=')';
		a[node][0]=1;
		a[node][1]=0;
		}
		else
		{
		s[pos]='(';
		a[node][0]=0;
		a[node][1]=1;
	
		}
		return;
	}
	update(2*node,b,(b+e)/2,pos);
	update(2*node+1,(b+e)/2+1,e,pos);
	if(o==1)
	{
	a[node][0]=a[node*2][0];a[node][1]=a[node*2+1][1];
	if(a[2*node][1]>a[2*node+1][0])
	a[node][1]=a[node][1]+a[2*node][1]-a[2*node+1][0];
	else
	a[node][0]=a[node][0]+a[2*node+1][0]-a[2*node][1];
	}
}
int main()
{
	int m,j,t=1;
	for(t=1;t<=10;t++)
	{
		printf("Test %d:\n",t);
		scanf("%d",&l);
		max=0;
		scanf("%s",s);
		segment(1,0,l-1);
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
		scanf("%d",&k);
		if(k==0)
		{
			if(a[1][0]==a[1][1]&&a[1][0]==0)
			printf("YES\n");
			else
			printf("NO\n");
		}
		else
		{
		k--;
		update(1,0,l-1,k);
		}
		}
	}
	return 0;
}
