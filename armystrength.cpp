#include<stdio.h>
int main()
{
    int t,l=0,i,q=0,s[100],g=0;
    scanf("%d",&t);
    if(t>0)
    s[t];
    while(t>0)
    {
        int ng,nm,max=0,d=0;
    	scanf("%d%d",&ng,&nm);
		if(ng>0&&nm>0)
		{
		int a[ng],b[nm],c[ng+nm];
		for(i=0;i<ng;i++)
		{
		scanf("%d",&a[i]);
        if(a[i]<0)
        q=1;
		c[d++]=a[i];
        }
		for(i=0;i<nm;i++)
		{
		scanf("%d",&b[i]);
        if(b[i]<0)
        t=1;
		c[d++]=b[i];
		}
		max=c[0];
		for(i=1;i<d;i++)
		{	
		if(max<c[i])
			max=c[i];
		}
		int flag=0,temp=0;
		for(i=0;i<ng;i++)
		{
			if(a[i]==max)
			{
				flag=1;break;
			}
		}
		for(i=0;i<nm;i++)
		{
			if(b[i]==max)
			{
				temp=1;
				break;
			}
		}
		if(q==0)
        {
		if(flag==1&&temp==1)
		printf("Godzilla");
		else if(flag==1&&temp==0)
			printf("Godzilla");
		else if(flag==0&&temp==1)
		printf("MechaGodzilla");
		else 
		printf("Godzilla");
        }
	}
	t--;q=0;
}

return 0;
}


