#include<stdio.h>
#include<conio.h>
#define MAX 10000

int len = 0;
int fact[MAX];

void factorial(int);
void multiply(int);

int main()
{
int n,i;


printf("\nEnter any integer number : \n");
scanf("%d",&n);

fact[0]=1;
factorial(n);

printf("\nFactorial of %d is :\n",n);
for(i=len;i>=0;i--){
printf("%d",fact[i]);
}
getch();
}

void factorial(int n)
{
int i;
for(i=2;i<=n;i++){
multiply(i);
}
}

void multiply(int n)
{
long i,r=0;
int arr[MAX];
for(i=0;i<=len;i++)
{
arr[i]=fact[i];
}

for(i=0;i<=len;i++)
{
fact[i] = (arr[i]*n + r)%10;
r = (arr[i]*n + r)/10;
}
if(r!=0)
while(r!=0)
{
fact[i]=r%10;
r= r/10;
i++;
}
len = i-1;
} 
