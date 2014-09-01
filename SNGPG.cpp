#include<stdio.h>
int main()
{
	long long int i,j,k,n,t;
	scanf("%lld",&t);
	while(t>0)
	{
		scanf("%lld %lld",&i,&j);
		if(i>3)
		printf("0\n");
		else
		{
			if(j>3)
			j=3;
			int ans=j-i+1;
			printf("%d\n",ans);
		}
		
		t--;
	}
	
	return 0;

}
