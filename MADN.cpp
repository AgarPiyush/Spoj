#include<stdio.h>

int main()
{
	char v[5]={'A','U','E','O','I'},c[21]={'J','S','B','K','T','C','L','D','M','V','N','W','F','X','G','P','Y','H','Q','Z','R'};
	long long int cv,pv,cc,pc,i,j,k=1,n,t;
	scanf("%lld",&t);
	while(t>0)
	{
		
		char w[100000];
		scanf("%lld",&n);
		cv=pv=cc=pc=0;
		for(i=1;i<=n;i++)
		{
			if(i%2!=0)
			{
				if(cv==21)
				{
					cv=1;
					pv++;
					w[i-1]=v[pv];
					
				}
				else
				{
				w[i-1]=v[pv];
				cv++;
				
				}
			}
			else
			{
				if(cc==5)
				{
					cc=1;
					pc++;
					w[i-1]=c[pc];
					
				}
				else
				{
					w[i-1]=c[pc];
					cc++;
					
				}
			}
		}
		for(i=0;i<n;i=i++)
		{
			for(j=0;j<n-2-i;j++)
			{
				if(w[j]>w[j+2])
				{
					char d=w[j];
					w[j]=w[j+2];
					w[j+2]=d;
				}	
			}
		}
		printf("Case %lld: ",k);
		k++;
		for(i=0;i<n;i++)
		printf("%c",w[i]);
		printf("\n");
		t--;
	}
	
	
}
