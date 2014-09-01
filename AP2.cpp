#include<stdio.h>
int main()
{
    int t,a[300],c=0;
    scanf("%d",&t);
    if(t<101)
	{
	while(t>0)
	{
		int z,t3,tn3,s,d,n;
		scanf("%d%d%d",&t3,&tn3,&s);
        n=(2*s)/(t3+tn3);
		d=(tn3-t3)/(n-5);
		z=t3-(2*d);
		a[c++]=z;
		a[c++]=d;
		a[c++]=n;
        }
        t--;
    }
	int i,j;
	for(i=0;i<c;i=i+3)
	{
		int f=a[i+1];
		int s=a[i],flag=0;
        int k=s;
        for(j=0;j<a[i+2];j++)
    	{
            if(k<0)
            {
                flag=1;
                break;
            }
			k=k+f;
        }
        if(a[i+2]>6&&flag==0)
        {
            k=s;
    	printf("\n%d",a[i+2]);
		printf("\n");
		
        for(j=0;j<a[i+2];j++)
		{
			printf("%d ",k);
			k=k+f;
		}
        }
	}
	}
	return 0;
}

