#include<stdio.h> 
long long int gg[10000],a[2000000],p[1000000],b[1000000],ff[100000],hh[100000],e[100000],i,c,s;
int main()
{
	for(i=1;i<=1000000;i++)
	{
		 c=i,s=0;
		while(c>0)
		{
			s=s+c%10;
			c=c/10;
		}
		s=s+i;
		a[s]=1;
	}
	long long int j=0,ll=0,y=0,z=0;
	long long int sum=0,c=0;
/*	for(i=4000;i<=6000;i++) 
	if(!a[i]) 
	{
		printf("%lld ",i);
		j++;
	}
	printf("%lld\n",j);
	*/
	for(i=1;i<=1000000;i++) 
	if(!a[i]) 
	{
	sum=i-sum;
	//if(i>=20)
	//printf("%lld ",sum);
	if(sum==2)
	ff[j++]=i;
	if(sum==11)
	gg[ll++]=i;
	if(sum==41)
	e[y++]=i;
	if(sum==28)
	hh[z++]=i;
	
	if(i>9)
	b[sum]++;
	if(sum==11)
	c++;
	else if(sum==2)
	{
	//	printf(" %lld ",c);
		c=0;
	}
	sum=i;  
	}
	/*for(i=0;i<100;i++)
	if(b[i]) printf("%lld %lld\n",i,b[i]);*/
	for(i=0;i<500;i++)
	printf("%lld ",gg[i]);
	printf("\n\n");
/*	sum=20;
	for(i=1;i<9000;i++)
	{
		p[gg[i]-sum]=1;
		sum=gg[i];
	}
	
	printf("\n\n");
	for(i=0;i<=1000000;i++) if(p[i]) printf("%lld \n",i);*/
return 0;
}
