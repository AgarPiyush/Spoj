import java.io.*;
class EDIST
{
	static String a,b;
	public static void main(String args[])throws IOException
	{
		DataInputStream br=new DataInputStream(System.in);

		int i,j,k=0,t,d;
		t=Integer.parseInt(br.readLine());
		while(t>0)
		{
			k=0;
			a=br.readLine();
			a=a.toUpperCase();
			b=br.readLine();
			b=b.toUpperCase();
			int m=a.length();
			int n=b.length();
			if(m>=n)
			{
			k=m-n;
			d=n;
			}
			else
			{
			k=n-m;
			d=m;
			}

			for(i=0;i<d;i++)
		{
				if(a.charAt(i)!=b.charAt(i))
					k++;
			}
			System.out.println(k);
				t--;
		}
	}
}
