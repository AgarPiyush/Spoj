#include<stdio.h>
int main()
{
int i=0,a[10000],nw=0,z,c=0,b[1000],f=0,tot=0,j,k=0,t=0,avg;
scanf("%d",&z);
while(z!=-1)
{
b[f++]=z;
for(i=0;i<z;i++)	
scanf("%d",&a[nw++]);	
scanf("%d",&z);
}
for(i=0;i<f;i++)
{
c=0;
k=k+b[i];
for(j=t;j<k;j++)
tot=tot+a[j];
if(tot%b[i]==0)
{
avg=tot/b[i];
for(j=t;j<k;j++)
{
if(a[j]>avg)
c=c+a[j]-avg;
}
printf("%d\n",c);
}
else
printf("-1\n");
tot=0;
t=b[i];
}
return 0;
}
