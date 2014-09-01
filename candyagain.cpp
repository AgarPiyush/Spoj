#include<stdio.h>
int main()
{
int i=0,nw=0,z,c=0,f=0,tot=0,j,k=0,t=0,avg,b[10000];
scanf("%d",&z);
int a[z];
while(z!=-1)
{
for(i=0;i<z;i++)
scanf("%d",&a[i]);
for(k=0;k<z;k++)
tot=tot+a[k];
if(tot%z==0)
{
avg=tot/z;
for(j=0;j<z;j++)
{
if(a[j]>avg)
c=c+a[j]-avg;
}
b[nw++]=c;
}
else
b[nw++]=-1;
tot=0;
scanf("%d",&z);
if(z!=-1)
a[z];
c=0;
}
for(i=0;i<nw;i++)
printf("\n%d",b[i]);
return 0;
}

