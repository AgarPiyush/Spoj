#include<stdio.h>
#include<math.h>
long long int a[10000000]={0};
int main()
{
long long int i,j,n,k;
a[4]=a[9]=a[16]=a[25]=a[64]=a[289]=a[729]=a[1681]=a[2401]=a[3481]=a[4096]=a[5041]=a[7921]=a[10201]=a[15625]=a[17161]=a[27889]=a[28561]=a[29929]=a[65536]=a[83521]=a[85849]=a[146689]=a[262144]=a[279841]=a[458329]=a[491401]=a[531441]=a[552049]=a[579121]=a[597529]=a[683929]=a[703921]=a[707281]=a[734449]=a[829921]=1;
a[2]=1;
a[9]=1;
long long int t;
scanf("%lld",&t);
while(t>0)
{
long long int sum=0;
scanf("%lld %lld",&i,&j);
for(k=i;k<=j;k++)
{
if(a[k]==1)
sum++;
}
printf("%lld\n",sum);
t--;
}

return 0;
}

