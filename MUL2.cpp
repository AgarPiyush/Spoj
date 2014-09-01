#include<stdio.h>
#include<string.h>
char c[1000000],d[1000000],aa[1000000],bb[1000000];
long long int l1,l2,temp1=0,temp2=0,i,t,j,k,l,n;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		
		long long int mul[10000];
		temp1=0,temp2=0;
		scanf("%s",aa);
		scanf("%s",bb);
		
		c[0]=c[1]=c[2]=c[3]=c[4]=c[5]=c[6]='0';
		d[0]=d[1]=d[2]=d[3]=d[4]=d[5]=d[6]='0';
		if(aa[0]=='0'||bb[0]=='0')
		printf("0\n");
		else
		{
		strcat(c,aa);
		strcat(d,bb);
		l1=strlen(aa);
		l2=strlen(bb);
		long long int pro,l5,l6,l=0,sum2=0,ff=0,v=1,w,u,y,z,qq,ww;
		y=l1/8;
		z=l2/8;
		if(l2%8==0)
		z--;
		if(l1%8==0)
		y--;
		qq=strlen(c);
		ww=strlen(d);
		/*printf("%s\n",c);
		printf("%s\n",d);*/
		long long int l3=l5=qq;
		long long int l4=l6=ww;
		long long int q=1,sum1=0;
		for(i=z;i>=0;i--)
		{
			sum2=(d[l4-1]-48)+(10*(d[l4-2]-48))+(100*(d[l4-3]-48))+(1000*(d[l4-4]-48))+(10000*(d[l4-5]-48))+((100000)*(d[l4-6]-48));
			sum2=sum2+1000000*(d[l4-7]-48)+((10000000)*(d[l4-8]-48));	
			printf("second number %lld\n",sum2);		
			l4=l4-8;
				for(j=y;j>=0;j--)
				{
				
					sum1=(c[l3-1]-48)+(10*(c[l3-2]-48))+(100*(c[l3-3]-48))+(1000*(c[l3-4]-48))+(10000*(c[l3-5]-48))+((100000)*(c[l3-6]-48));
					sum1=sum1+(1000000*(c[l3-7]-48))+((10000000)*(c[l3-8]-48));
					printf("first number %lld\n",sum1);
					pro=sum2*sum1+l;
					printf("pro is %lld\n",pro);
					if(pro!=0)
					{
					int r=0,vv;	
					pro=pro+mul[ff];
					temp2=pro%100000000;
					mul[ff++]=temp2;
				
					l=pro/100000000;
					w=ff;
					}
				
					l3=l3-8;
				}
				if(l>0)
				{
					//printf("yes");
					k=(mul[ff]+l);
					mul[ff++]=k;
					if(ff>w)
					w=ff;
				}
				ff=v;
				v++;
				l=0;
				l3=l5;
		}

		for(i=w-1;i>=0;i--)
		{
		printf("%lld",mul[i]);
		mul[i]=0;
		}
		/*for(i=0;i<temp1;i++)
		printf("0");*/
		printf("\n");
		c[7]='\0';
		d[7]='\0';
		
	}
	}
	return 0;
}
