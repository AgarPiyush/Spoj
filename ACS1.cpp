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
#define inp(a) scanf("%lld",&a)
#define line(a) printf("%lld ",a);
#define next() printf("\n");
#define out(a) printf("%lld\n",a)
#define swap(a,b) {a=a+b;a=a-b;b=a-b;}
#define VI vector<int>
#define VLL vector<long long int>
#define PQI priority_queue<int>
#define PQLL priority_queue<long long int>
#define ll long long int
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
ll m[1240][5680],fx[1240*5680],fy[1240*5680],newr[1240],newc[5680];
char c;
ll r,w,i,j,k,l,col[10000]={0},n,row[10000]={0},n1,n2;
int main()
{
	ll c=1;
	for(i=1;i<=3;i++)
	newr[i]=i;
	for(i=1;i<=3;i++)
	newc[i]=i;
	
	for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
	{
	m[i][j]=c;
	fx[c]=i;
	fy[c++]=j;
	}
	char ch;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch!='W')
		scanf("%lld %lld",&n1,&n2);
		else
		scanf("%lld",&n);
		if(ch=='R')
		{
			int cp1,cp2;
			cp1=row[n2]+m[n2][1]-m[n1][1]-row[n1];
			cp2=-(row[n2]+m[n2][1]-m[n1][1]-row[n1]);
			row[n1]+=cp1;row[n2]+=cp2;
			ll temp=newr[n1];
			newr[n1]=newr[n2];
			newr[n2]=temp;
		}
		else
		if(ch=='C')
		{
			int cp1,cp2;
			cp1=m[1][n2]-m[1][n1]+col[n2]-col[n1];
			cp2=-(m[1][n2]-m[1][n1]+col[n2]-col[n1]);
			col[n1]+=cp1;col[n2]+=cp2;
			ll temp=newc[n1];
			newc[n1]=newc[n2];
			newc[n2]=temp;
		}
		else if(ch=='Q')
		{
			printf("%lld\n",m[n1][n2]+row[n1]+col[n2]);
		}
		else if(ch=='W')
		{
			printf("%lld %lld\n",newr[fx[n]],newc[fy[n]]);
		}
			for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				printf("%lld ",m[i][j]+row[i]+col[j]);
			}
			printf("\n");
		}
		printf("\n");
	
		getchar();
	}
	
	return 0;
}



