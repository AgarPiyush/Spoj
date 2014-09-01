import java.io.*;
import java.util.*;
class SBETS
{
	public static void main(String args[])throws IOException
	{
		DataInputStream br=new DataInputStream(System.in);
		String a;
		String p[],f[];
		int j;
		p=new String[100];
		f=new String[100];
		int t=Integer.parseInt(br.readLine());
		while(t>0)
		{
			int y=16,i;
			int c=0,d=0;
			while(y>0)
			{
			String w="",q="";
			a=br.readLine();
			a=a+" ";
			StringTokenizer st=new StringTokenizer(a);
			q=st.nextToken();
			w=st.nextToken();
			int h=Integer.parseInt(st.nextToken());
			i=Integer.parseInt(st.nextToken());
			if(h>i)
			{
			p[c++]=q;
			f[d++]=w;
			}
			else
			{
			p[c++]=w;
			f[d++]=q;
			}
			y--;
			}
			for(i=0;i<16;i++)
				for(j=0;j<16;j++)
				{
					if(f[i].equals(p[j]))
						p[j]="1";
				}
			for(i=0;i<16;i++)
				if(!p[i].equals("1"))
				{
				System.out.println(p[i]);
				break;
				}
			t--;
		}
	}
}