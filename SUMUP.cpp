#include<stdio.h>
int main()
{
    long long int n,t;
    double pro=0,i;
	scanf("%lld",&t);
	if(t>0)
	{
	while(t>0)
	{
		pro=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		pro=pro+((i)/(((i*i)-i+1)*((i*i)+i+1)));
		printf("%0.5lf\n",pro);
		t--;
	}
}
	return 0;
}
