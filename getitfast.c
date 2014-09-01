#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,x1,x2,ans,y1,y2,x3,y3;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
		if((x1>=0&&x2>=0)||(x1<=0&&x2<=0))
		x3=x1-x2;
		else if((x1>=0&&x2<=0)||(x1<=0&&x2>=0))
		x3=x1+x2;
		if((y1>=0&&y2>=0)||(y1<=0&&y2<=0))
		y3=y1-y2;
		else if((y1>=0&&y2<=0)||(y1<=0&&y2>=0))
		y3=y1+y2;
		ans=abs(x3)+abs(y3);
		printf("%lld\n",ans);
	}
	return 0;
}
