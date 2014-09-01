import java.io.*;
import java.math.*;
import java.lang.*;
class julka
{
	public static void main(String args[])throws IOException
	{
		DataInputStream br=new DataInputStream(System.in);
		String e="",f="";
		int i;

			for(i=1;i<=10;i++)
			{
			e=br.readLine();
			f=br.readLine();
			BigInteger a=new BigInteger(e);
  			BigInteger b=new BigInteger(f);
  			BigInteger g=new BigInteger("2");
			BigInteger c=a.add(b);
		 	c=c.divide(g);
			BigInteger d=a.subtract(b);
			d=d.divide(g);
			System.out.println(c);
			System.out.println(d);
			}
	}
}