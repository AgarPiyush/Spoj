#include<iostream>
#include<utility>
#include<stdio.h>

#include <iomanip>
#include<queue>
using namespace std;
struct a
{
	int first;
	int second;
};
class comparepair
{
	public: bool operator()(a a1,a a2)
	{
		if(a1.first==a2.first)
		{
		if(a1.second>a2.second) return true;
		else
		return false;
		}
		else if(a1.first>a2.first) {
		return true;
		}
		return false;
	}
};
int main()
{
	int k,i,t;
	priority_queue <a,vector<a>,comparepair > pq;
	a arr[100000];
	for(i=0;i<5;i++)
	{
		scanf("%d %d",&arr[i].first,&arr[i].second);
		pq.push(arr[i]);
	}
	printf("\n");
	while(!pq.empty())
	{
		a b=pq.top();
		printf("%d %d\n",b.first,b.second);
		pq.pop();
	}
	return 0;
}
