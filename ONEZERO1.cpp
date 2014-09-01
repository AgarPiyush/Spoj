#include<stdio.h>
typedef long long int ll;
int main()
{
	ll a[100000],i,j;
	a[2]=1;
	for(i=3;i<=2000;i=i+2)
	{
		if(!a[i])
		for(j=3;i*j<=2000;j=j+2)
		a[i*j]=1;
		
	}
	
	return 0;
	
}
