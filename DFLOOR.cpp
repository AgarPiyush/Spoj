#include<stdio.h>
#include<string.h>
char s[100][100],f[100];
long long int i,j,min=10000000,k,l,ini[100][100],fin[100][100],r,c;
long long int temp[100][100],pos[100][100],p;
void flip(long long int x,long long int y)
{
//	printf("%lld %lld\n",x,y);
	fin[x-1][y]=1-fin[x-1][y];
	fin[x][y]=1-fin[x][y];
	fin[x][y-1]=1-fin[x][y-1];
	fin[x+1][y]=1-fin[x+1][y];
	fin[x][y+1]=1-fin[x][y+1];
}
int cal(long long int first)
{
	int n=0,size=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			fin[i+1][j+1]=ini[i][j];
		}
	}
	for(i=0;i<c;i++)
	{
	if((first>>i)&1)
	{
		n++;
		if(n>=min)
		return min;	
		flip(1,i+1);
		pos[0][size]=1;
		pos[1][size++]=i+1;
		/*printf("yes %lld\n",i+1);
		printf("after flipping\n");
		for(j=1;j<=c;j++)
		printf("%lld ",fin[1][j]);
		printf("\n");*/
	}
	}
	for(i=2;i<=r;i++)
	{
	for(j=1;j<=c;j++)
	{
		if(fin[i-1][j])
		{
			n++;
			if(n>=min)
			return min;
			flip(i,j);
			pos[0][size]=i;
			pos[1][size++]=j;
		}
	}	
	}
/*	for(i=1;i<=c;i++)
	printf("%lld ",fin[r][i]);
	printf("\n");*/
	for(i=1;i<=c;i++)
	if(fin[r][i])
	return min;
	
	return n;
	
}

int main()
{
	long long int first;
	scanf("%lld %lld",&c,&r);
	while(r!=0&&c!=0)
	{
		min=10000000;
	for(i=0;i<r;i++)
	{
	scanf("%s",f);
	for(j=0;j<c;j++)
	if(f[j]=='0')
	ini[i][j]=1;
	else
	ini[i][j]=0;
	}
	
	/*if(c>r)
	{
		for(i=0;i<r;i++)
		{
			for(j=i+1;j<c;j++)
			{
				int temp=ini[i][j];
				ini[i][j]=ini[j][i];
				ini[j][i]=temp;
			}
		}
		int temp=r;
		r=c;
		c=temp;
		
	}*/
	for(i=1;i<=r;i++)
	{
	
	for(j=1;j<=c;j++)
	printf("%lld",fin[i][j]);
	printf("\n");
}
	for(first=0;first<(1<<c);first++)
	{
	k=cal(first);
	if(min>k)
	{
	min=k;
	for(p=0;p<min;p++)
	{
		temp[0][p]=pos[0][p];
		temp[1][p]=pos[1][p];
	}
	}
	}
	if(min==10000000)
	printf("-1\n");
	else
	{
	printf("%lld\n",min);
	for(i=0;i<min;i++)
	printf("%lld %lld\n",temp[i][1]+1,temp[i][0]+1);
	}
	scanf("%lld %lld",&r,&c);
	
	}
	return 0;
	
}
