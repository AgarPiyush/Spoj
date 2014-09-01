#include<stdio.h>
#include<math.h>
double t,n,m,a[100][100];
int main()
{
	double p,l,k;
	long long int i,j;
	scanf("%lf",&t);
	while(t--)
	{
	scanf("%lf %lf",&p,&l);
	for(i=1;i<=p;i++)
	{
		scanf("%lf %lf",&m,&n);
		a[i][0]=m;
		a[i][1]=n;
	}
	for(j=1;j<=l;j++)
	{
	double x1,x2,y1,y2,c=0;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	double dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	for(i=1;i<=p;i++)
	{
		double dis2=sqrt((x1-a[i][0])*(x1-a[i][0])+(y1-a[i][1])*(y1-a[i][1]))+sqrt((x2-a[i][0])*(x2-a[i][0])+(y2-a[i][1])*(y2-a[i][1]));
		if(dis==dis2)
		c++;		
	}
	printf("%.0lf\n",c);
	}
	}
	return 0;
}
