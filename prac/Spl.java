import java.io.*;
class Spl
{
	public static void main(String args[])throws IOException
	{

		String a="$$$I ____ eating ________.$$$##C0am##0is##0are##C1fruit##1water##1wood##1shirt##";
		String b[];
		b=new String[100];
		b=a.split("##");
		int l=b.length;
		for(int i=0;i<l;i++)
			System.out.println(b[i]);
	}
}