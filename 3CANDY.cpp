#include<stdio.h>
int main()
{
    int s[100],t,k=0;
    scanf("%d",&t);
    int l=t;
    if(t>0)
	s[t];
	while(t>0)
	{
		printf("\n");
		int sum=0;
        int z,i;
		scanf("%d",&z);
		if(z>0)
        {
		int a[z];
		for(i=0;i<z;i++)
		scanf("%d",&a[i]);
		for(i=0;i<z;i++)
		sum=(sum+a[i])%z;
		if(sum==0)
		s[k++]=0;
		else
		s[k++]=1;
		
    }
    t--;
	}
	int i;
	if(l>0)
    {
	for(i=0;i<k;i++)
	{
		if(s[i]==0)
		printf("\nYES");
		else
		printf("\nNO");
	}
    }
	return 0;
}


