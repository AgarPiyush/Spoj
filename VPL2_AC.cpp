#include<stdio.h>
#include<string.h>
long long int a[100][100],b[10000000];
char s[10000000];
long long int v,h,t,i,j,k;
int main()
{
	a['G']['Y']=a['Y']['G']=a['B']['R']=a['R']['B']=a['Y']['O']=a['O']['Y']=2;
	a['G']['R']=a['R']['G']=a['Y']['R']=a['R']['Y']=a['Y']['B']=a['B']['Y']=a['B']['O']=a['O']['B']=1;
	a['G']['B']=a['B']['G']=a['O']['R']=a['R']['O']=3;
	a['O']['G']=a['G']['O']=4;
	a['O']['O']=a['G']['G']=a['B']['B']=a['R']['R']=a['Y']['Y']=0;
	scanf("%lld",&t);
	for(v=1;v<=t;v++)
	{
		
		long long int l,temp=0,k=0,c=1,max=c,y=0;
		scanf("%lld %s",&h,&s);
		l=strlen(s);
		j=1;
		
		for(i=0;i<l-1;i++)
		{
		k=a[s[i]][s[i+1]];
		temp=temp+k;
		if(temp<=h)
		{
		j++;
		}
		else
		{
			if(j>max)
			max=j;
			while(temp>h)
			{
				temp=temp-a[s[y]][s[y+1]];
				y++;
				j--;	
			}
			j++;	
		}
		}
		if(j>max)
		max=j;
		printf("Scenario #%lld: %lld\n",v,max);
	}
	return 0;
}
