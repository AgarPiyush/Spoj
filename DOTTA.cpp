#include<stdio.h>
long long int a[100000];
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t>0)
	{
		long long int k=0,n,m,h,i,j,temp,flag=0;
		scanf("%lld %lld %lld",&n,&m,&h);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		i=0;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<=n-1-i;j++)
			{
				if(a[j]<a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		i=0;
		while(k<m)
		{
			flag=0;
			while((a[i]-h)>0)
			{
				a[i]=a[i]-h;
				flag=1;
				k++;
			}
			i++;
			if(flag==0)
			break;
		}
		if(flag==0)
		printf("NO\n");
		else
		printf("YES\n");
		t--;
	}
	return 0;	
}
