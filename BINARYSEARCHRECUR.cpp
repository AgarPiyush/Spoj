#include<stdio.h>
int isbinary(int a[],int,int,int);
int main()
{
	int n,a[100000],j,i,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int p=isbinary(a,0,n-1,s);
	if(p!=-99)
	printf("position is %d\n",p);
	else
	printf("not found");
	return 0;
}
int isbinary(int a[],int l,int u,int s)
{
	if(l>u)
	return -99;
	int mid=(l+u)/2;
	if(a[mid]==s)
	return mid;
	else if(a[mid]<s)
		return isbinary(a,mid+1,u,s);
			else
		return isbinary(a,l,mid-1,s);
}
