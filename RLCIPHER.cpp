#include<stdio.h>
int a[1000000];
void recur(int x)
{
	if(x>100) return;
	a[x]=1;
	printf("%d ",x);
	if(!a[x+3])
	recur(x+3);
	if(!a[x+4])
	recur(x+4);
}
int main()
{
	int n,i;
	recur(3);
	recur(4);
	/*for(i=0;i<100000;i++)
	if(!a[i])
	printf("%d\n",i);*/
}
