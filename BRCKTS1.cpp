#include<stdio.h>
char s[40000],c;
int a[1000000][2],i,j,k,l,m,n;
#define getcx getchar_unlocked
inline void fscan(int *a ) 
{
int n=0; int ch = getcx(); int sign = 1;
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
		return;
	}
	segment(node<<1,b,((e+b)>>1));
	segment((node<<1)+1,((e+b)>>1)+1,e);
	a[node][0]=a[(node<<1)][0];a[node][1]=a[(node<<1)+1][1];
	if(a[node<<1][1]>a[(node<<1)+1][0])
	a[node][1]=a[node][1]+a[(node<<1)][1]-a[(node<<1)+1][0];
	else
	a[node][0]=a[node][0]+a[(node<<1)+1][0]-a[(node<<1)][1];
}
void update(int node,int b,int e,int pos)
{
	//printf("node %d b %d e %d pos %d\n",node,b,e,pos);
	if(pos>e||b>pos)
	return;
	if(e==b)
	{
		
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
	update((node<<1),b,(b+e)>>1,pos);
	update((node<<1)+1,((b+e)>>1)+1,e,pos);
	
	a[node][0]=a[(node<<1)][0];a[node][1]=a[(node<<1)+1][1];
	if(a[(node<<1)][1]>a[(node<<1)+1][0])
	a[node][1]=a[node][1]+a[(node<<1)][1]-a[(node<<1)+1][0];
	else
	a[node][0]=a[node][0]+a[(node<<1)+1][0]-a[(node<<1)][1];
	
}
int main()
{
	int m,j,t=1;
	for(t=1;t<=10;t++)
	{
		printf("Test %d:\n",t);
		fscan(&l);
		max=0;
		scanf("%s",s);
		segment(1,0,l-1);
		fscan(&m);
		for(j=0;j<m;j++)
		{
		fscan(&k);
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
