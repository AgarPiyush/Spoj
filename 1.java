import java.io.*;

class done
{
	public static void main(String args[])throws IOException
	{
		int q=0x7f080000;
		int z=q;
		for(int i=1;i<=4;i++)
		for(int j=1;j<=4;j++)
		{
		System.out.println(z);
		int diff=(int)(z-q);
		System.out.println("Diff is"+diff);
		z++;

		}

	}
}

