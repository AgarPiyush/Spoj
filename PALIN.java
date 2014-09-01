import java.io.*;
class PALIN
{
	public static void main(String args[])throws IOException
	{
		DataInputStream br=new DataInputStream(System.in);
		String a,b="";
		int i,j,k;
		a=br.readLine();
		int l=a.length();
		 k=l;
		for(i=0;i<l/2;i++)
		{
			if((int)a.charAt(i)>(int)a.charAt(k-i-1))
			a[k-i-1]=a.charAt(i);
		}
		System.out.println(a);
	}
}