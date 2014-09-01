#include<stdio.h>
typedef long long int ll;
ll m,n,ans;
ll i,j;
ll recur(ll x,ll y)
{
	if(x==0&&y==0)
	return 1;
	if(y==0&&x!=0)
	return 0;
	if(x==0&&y!=0)
	return 0;
	else
	return (y*recur(x-1,y)+recur(x-1,y-1));
}

int main()
{
	
	/*for(i=1;i<=10;i++)
	{*/
		for(j=1;j<=100;j++)
		{
			ans=recur(100,j);
			if(ans%2==1)
			printf("100 %lld\n",j);
		}
	//}
	return 0;
}
