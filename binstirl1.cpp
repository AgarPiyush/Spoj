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
	

		for(j=1;j<=75;j++)
		{
			ans=recur(75,j);
			if(ans%2==0)
			printf("75 %lld\n",j);
		}
		printf("\n");
	
	return 0;
}
