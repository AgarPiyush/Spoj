import java.io.*;
import java.math.*;
class julka
{
	public static void main(String args[])throws IOException
	{
			DataInputStream br=new DataInputStream(System.in);
			int i,t,n;
			t=Integer.parseInt(br.readLine());
			while(t>0)
			{

			n=Integer.parseInt(br.readLine());
			n=n+3;
			BigInteger c=new BigInteger("1");
			for(i=2;i<=n;i++)
			{
			String l=Integer.toString(i);
			BigInteger k=new BigInteger(l);
			c=c.multiply(k);
		 	}
		 	String m=Integer.toString(n);
		 	BigInteger d=new BigInteger(m);
			d=d.multiply(d);
		 	c=c.subtract(d);
		 	BigInteger f=new BigInteger("1");
			c=c.add(f);
		 	t--;
			System.out.println(c);
			}
	}
}