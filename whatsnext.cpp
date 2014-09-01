#include<stdio.h>
int main()
{
	float a[10000];
	int i=0,j,k,t=0,sum=0,l=0;
	while(t==0)
	{
		for(i=0;i<=2;i++)
		scanf("%f",&a[sum++]);
		if((a[l]==a[l+1])&&(a[l+1]==a[l+2])&&(a[l]==0))
		break;
		l=sum;
	}
	l=0;
	while(l<(sum-3))
	{
		if((a[l+2]-a[l+1])==(a[l+1]-a[l]))
		{
			int c=(2*a[l+2])-a[l+1];
			printf("\nAP %d",c);
		}
		if((a[l+2]/a[l+1])==(a[l+1]/a[l]))
		{
			int c=(a[l+2]*a[l+2])/a[l+1];
			printf("\nGP %d",c);
		}
		l=l+3;
	}
	return 0;
}
