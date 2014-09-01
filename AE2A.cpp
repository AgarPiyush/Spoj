#include<stdio.h>
#include<math.h>
#include<stdlib.h>
long long int i,j,k,l,m,t;
double a[2010][2010];
int main()
{
	scanf("%lld",&t);
	
		for(i=1;i<=6;i++)
		{
			a[1][i]=1/6.0;
		}
		for(i=2;i<=1000;i++)
		{
			for(j=1;j<=2000;j++)
			{
				switch(i)
				{
				
				case 1:
				a[i][j]=0;
				break;
				case 2:
				 a[i][j]=(a[i-1][j-1]+a[i-1][j-2])/6.0;
				 break;
				case 3:
				a[i][j]=(a[i-1][j-1]+a[i-1][j-2]+a[i-1][j-3])/6.0;
				break;
				case 4:
				a[i][j]=(a[i-1][j-1]+a[i-1][j-2]+a[i-1][j-3]+a[i-1][j-4])/6.0;
				break;
				case 5:
				a[i][j]=(a[i-1][j-1]+a[i-1][j-2]+a[i-1][j-3]+a[i-1][j-4]+a[i-1][j-5])/6.0;
				break;
				default:
				a[i][j]=(a[i-1][j-1]+a[i-1][j-2]+a[i-1][j-3]+a[i-1][j-4]+a[i-1][j-5]+a[i-1][j-6])/6.0;
				}
			}
		}
		while(t--)
		{
		long long int n,c;
		scanf("%lld %lld",&n,&c);
		if(n>2000||c>2000)
		printf("0\n");
		else
		{
		long long int k=(long long int)(a[n][c]*100);
		printf("%lld\n",k);	
		}
		}
		return 0;
}


