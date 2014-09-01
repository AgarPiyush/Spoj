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
#define rowmax 1234
#define colmax 5678
inline void fscan(ll *a )
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
ll newr[1240],newc[5680],invrow[1240],invcol[5680];
char c;
ll r,w,i,j,k,l,col[10000]={0},n,row[10000]={0},n1,n2;
int main()
{
	ll c=1;
	for(i=1;i<=rowmax;i++)
	{
	newr[i]=i;
	invrow[i]=i;
	}
	
	for(i=1;i<=colmax;i++)
	{
	newc[i]=i;invcol[i]=i;
	}
    char ch;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch!='W')
		{
			fscan(&n1);fscan(&n2);
		}
		else
		fscan(&n);
		if(ch=='R')
		{
			int cp1,cp2;
			
			cp1=row[n2]+(n2-1)*5678+1-((n1-1)*5678+1)-row[n1];
			cp2=-(row[n2]+(n2-1)*5678+1-((n1-1)*5678+1)-row[n1]);
			row[n1]+=cp1;row[n2]+=cp2;
			ll temp=newr[n1];
			newr[n1]=newr[n2];
			newr[n2]=temp;
			temp=invrow[newr[n2]];
			invrow[newr[n2]]=invrow[newr[n1]];
			invrow[newr[n1]]=temp;
	//		printf("row n1 %lld row[n1] %lld n2 %lld row[n2] %lld\n",n1,newr[n1],n2,newr[n2]);
			
		}
		else
		if(ch=='C')
		{
			int cp1,cp2;
			cp1=n2-n1+col[n2]-col[n1];
			cp2=-(n2-n1+col[n2]-col[n1]);
			col[n1]+=cp1;col[n2]+=cp2;
			ll temp=newc[n1];
			newc[n1]=newc[n2];
			newc[n2]=temp;
			temp=invcol[newc[n2]];
			invcol[newc[n2]]=invcol[newc[n1]];
			invcol[newc[n1]]=temp;
	//		printf("col n1 %lld col[n1] %lld n2 %lld col[n2] %lld\n",n1,newc[n1],n2,newc[n2]);
			
		}
	
		if(ch=='Q')
		{
			printf("%lld\n",(n1-1)*5678+n2+row[n1]+col[n2]);
		}
		else if(ch=='W')
		{
			ll rw,cl;
			if(n%colmax!=0)
			{
			rw=n/colmax+1;
			cl=n%colmax;
			}
			else
			{
			rw=n/colmax;
			cl=colmax;
			}
			printf("%lld %lld\n",invrow[rw],invcol[cl]);
		}
	}
	
	return 0;
}






