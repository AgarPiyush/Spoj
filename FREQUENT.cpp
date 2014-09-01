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
#define next() printf("\n");
#define out(a) printf("%d\n",a)
#define swap(a,b) {a=a+b;a=a-b;b=a-b;}
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define ll long long int
#define mod 1000000007
#define getcx getchar_unlocked
inline void fscan(int *a )
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
}
struct node
{
	int left;
	int right;
	int leftcount;
	int rightcount;
	int max;
}seg[1000010];
int n,j,k=0,a[100010],node;
inline int maximum(int b,int c,int d)
{
	if(b>=c&&b>=d) return b;
	if(d>=b&&d>=c) return d;
	else return c;
}

void segment(int node,int b,int e)
{
	if(b==e)
	{
		seg[node].left=a[e];
		seg[node].right=a[e];
		seg[node].leftcount=1;
		seg[node].rightcount=1;
		seg[node].max=1;
		//out(seg[node].max);
		return;
	}
	segment(node<<1,b,(b+e)>>1);
	segment((node<<1)+1,((b+e)>>1)+1,e);
	int leftnode=node<<1;
	seg[node].left=seg[leftnode].left;
	seg[node].right=seg[(leftnode)+1].right;
	if(seg[leftnode].right==seg[(leftnode)+1].left)
	{
		int t=seg[leftnode].rightcount+seg[(leftnode)+1].leftcount;
		int max1=seg[leftnode].max;
		int max2=seg[(leftnode)+1].max;
		seg[node].max=maximum(t,max1,max2);
		if(seg[leftnode].left==seg[(leftnode)+1].right)
		{
			seg[node].leftcount=seg[node].rightcount=seg[leftnode].leftcount+seg[(leftnode)+1].rightcount;
		}
		else
		if(seg[(leftnode)+1].left==seg[(leftnode)+1].right)
		{
		seg[node].leftcount=seg[(leftnode)].leftcount;
		seg[node].rightcount=seg[(leftnode)].rightcount+seg[(leftnode)+1].leftcount;
		}
		else if(seg[leftnode].left==seg[leftnode].right)
		{
		seg[node].rightcount=seg[(leftnode)+1].rightcount;
		seg[node].leftcount=seg[leftnode].leftcount+seg[(leftnode)+1].leftcount;
		}
		else
		{
			seg[node].leftcount=seg[leftnode].leftcount;
			seg[node].rightcount=seg[(leftnode)+1].rightcount;
		}
	}
	else
	{
		seg[node].max=maximum(seg[leftnode].max,seg[(leftnode)+1].max,INT_MIN);
//		out(node);
		seg[node].leftcount=seg[leftnode].leftcount;
		seg[node].rightcount=seg[(leftnode)+1].rightcount;
	}
}
int ans=INT_MIN,lastright=INT_MIN,l=0,lastrightcount=0;
void query(int node,int b,int e,int i,int j)
{
	//printf("node is %d\n",node);
	if(j<b||i>e)
	return;
	if(b>=i&&j>=e)
	{
		//printf("%d %d\n",b,e);
		k=seg[node].max;
		if(lastright==seg[node].left)
		l=lastrightcount+seg[node].leftcount;
		else 
		l=0;
		ans=maximum(k,l,ans);
		if(lastright!=seg[node].right)
		lastrightcount=seg[node].rightcount;
		else
		lastrightcount+=seg[node].rightcount;
		lastright=seg[node].right;
		//printf("leftcount %d ans %d lasrightcount %d\n",l,ans,lastrightcount);
		return;
	}
	query(node<<1,b,(b+e)>>1,i,j);
	query((node<<1)+1,((b+e)>>1)+1,e,i,j);
}
int main()
{
	int i,m;
	
	
	fscan(&n);
	while(n!=0)
	{
	fscan(&m);
	for(i=0;i<n;i++) fscan(&a[i]);
	segment(1,0,n-1);
/*	for(i=1;i<=100;i++)
	if(seg[i].max!=0)
	{
		printf("i %d seg[i].max %d seg[i].left %d seg[i].leftcount %d seg[i].right %d seg[i].rightcount %d\n",i,seg[i].max,seg[i].left,seg[i].leftcount,seg[i].right,seg[i].rightcount);
	}*/
	
	while(m--)
	{
		int w,e;
		fscan(&w);
		fscan(&e);
		query(1,0,n-1,w-1,e-1);
		out(ans);
		ans=INT_MIN,lastright=INT_MIN,l=0,lastrightcount=0;
	}
	fscan(&n);
	}	
	return 0;
}

