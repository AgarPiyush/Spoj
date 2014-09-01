#include<stdio.h>
#include<string.h>
int mark[109][109],ind=0,done=0;
char s[109],a[109][109],arr[11]={'A','L','L','I','Z','Z','W','E','L','L'};
void recur(int ind,int x,int y,int path)
{
	int o,p,flag1=0;
	if(done==1)
	return ;
	for(o=x-1;o<=(x+1);o++)
	{
		for(p=y-1;p<=(y+1);p++)
		{
			if(a[o][p]==arr[ind+1]&&mark[o][p]==0)
			{
				flag1=1;
				path++;
				if(path==10)
				done=1;
				mark[o][p]=path;
				recur(ind+1,o,p,path);
				path--;
			}
		}
		if(done==1)
		break;
	}
		if(flag1==0)
		return;
}
int main()
{
	long long int pos[109][109],i,j,k,l,h,w,no=1,t;
	
	scanf("%lld",&t);
	while(t--)
	{
		ind=0;
		done=0;
		scanf("%lld %lld",&h,&w);
		long long int path,min=1000000;
		k=0;
		for(i=0;i<h;i++)
		{
			scanf("%s",s);
			for(j=0;j<w;j++)
			{
				a[i+1][j+1]=s[j];
				if(s[j]=='A')
				{
				pos[0][k]=i+1;
				pos[1][k++]=j+1;
				}
				mark[i+1][j+1]=0;
			}
		}
		int e,aa=0;
		for(i=0;i<k;i++)
		{
			done=0;			
			for(j=0;j<=h;j++)
			for(aa=0;aa<=w;aa++)
			mark[j][aa]=0;
			mark[pos[0][i]][pos[1][i]]=1;
			path=1;
			recur(0,pos[0][i],pos[1][i],path);
			for(j=1;j<=h;j++)
			{
			
			for(aa=1;aa<=w;aa++)
			{
			printf("%lld ",mark[j][aa]);
			}
			printf("\n");
			}
			
		}
	
		if(done==1)	
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}

