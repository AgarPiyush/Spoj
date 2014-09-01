import java.io.*;
class piyush
{
	int x=5,y=6,ans;
	piyush()
	{

	}
	piyush(int a,int b)
	{
		this.x=a;
		this.y=b;
	}
	void cal()
	{
	 ans=x+y;
	}
}
class done extends piyush
{
	done(int a,int b)
	{
		super(a,b);
		a++;
		b++;
		super.cal();
		System.out.print(ans);
	}
}

class call
{
	public static void main(String args[])throws IOException
	{
		done obj3=new done(2,3);
	}
}
