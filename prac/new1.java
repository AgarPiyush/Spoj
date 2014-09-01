import java.io.*;
import java.math.*;
import java.lang.*;
import java.util.*;
class Main
{
	public static void main(String args[])throws IOException
	{
		quickParseRead(System.in);
	}

		public static void quickParseRead(java.io.InputStream in) throws java.io.IOException
		{

		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		IntStreamReader inp = new IntStreamReader(in);

		int i,j,len,n,t,ff;
		t=inp.getNextInt();
		while(t>0)
		{
		t--;
		String s,k,a,b,c;
		n=inp.getNextInt();
		BigInteger [] arr=new BigInteger[n+3];
		for(i=0;i<n;i++)
		{
			ff=inp.getNextInt();
			k=Integer.toString(ff);
			BigInteger q=new BigInteger(k);
			arr[i]=q;
		}
		k=br.readLine();
		a=k.substring(0,k.indexOf(' '));
		b=k.substring(k.indexOf(' ')+1,k.lastIndexOf(' '));
		c=k.substring(k.lastIndexOf(' ')+1);
		BigInteger a1=new BigInteger(a);
		BigInteger b1=new BigInteger(b);
		BigInteger c1=new BigInteger(c);
		s=br.readLine();
		 i=0;
		 int end=n-1,count=n;
		for(count=0;count<n;count++)
		{

			if(s.charAt(count)=='A')
			{
				if(end>=i)
				{
				for(j=i;j<=end;j++)
				{
				arr[j]=arr[j].add(a1);
				}
				System.out.print(arr[i]+" ");
				i++;
				}
				else
				{
				for(j=i;j>=end;j--)
				{
				arr[j]=arr[j].add(a1);
				}

				System.out.print(arr[i].mod(c1)+" ");
				i--;
				}

			}
			else if(s.charAt(count)=='M')
			{
				if(end>=i)
				{

				for(j=i;j<=end;j++)
				{
				arr[j]=arr[j].multiply(b1);
				}
				System.out.print(arr[i]+" ");
				i++;
				}
				else
				{
				for(j=i;j>=end;j--)
				{
				arr[j]=arr[j].multiply(b1);
				}
				System.out.print(arr[i].mod(c1)+" ");
				i--;
				}

			}
			else
			{
			System.out.print(arr[end].mod(c1)+" ");
			if(end>=i)
			{
				int temp1=end-1;
				int temp2;
				temp2=temp1;
				temp1=i;
				i=temp2;
				end=temp1;
				int kk=0;
				/*for(kk=i;kk>=end;kk--)
				System.out.print(arr[kk]+" ");
				System.out.println();*/

			}
			else
			{
				int temp1=end+1;
				int temp2;
				temp2=temp1;
				temp1=i;
				i=temp2;
				end=temp1;
				int kk;
				/*for(kk=i;kk<=end;kk++)
				System.out.print(arr[kk]+" ");
				System.out.println();*/
			}


			}

		}

		System.out.println();

	}
	}

static class IntStreamReader {

		private java.io.BufferedInputStream inp = null;
		private int offset = 0;
		private int size = 51200;
		private byte[] buff = new byte[size];

		public IntStreamReader(InputStream in) throws IOException {
			inp = new java.io.BufferedInputStream(in);
			inp.read(buff, 0, size);
		}

		public int getNextInt() throws IOException {
			int parsedInt = 0;
			int i = offset;
			// skip any non digits
			while (i < buff.length && (buff[i] < '0' || buff[i] > '9')) {
				i++;
			}
			// read digits and parse number
			while (i < buff.length && buff[i] >= '0' && buff[i] <= '9') {
				parsedInt *= 10;
				parsedInt += buff[i] - '0';
				i++;
			}
			// check if we reached end of buffer
			if (i == buff.length) {
				// copy leftovers to buffer start
				int j = 0;
				for (; offset < buff.length; j++, offset++) {
					buff[j] = buff[offset];
				}
				// and now fil the buffer
				inp.read(buff, j, size - j);
				// and attempt to parse int again
				offset = 0;
				parsedInt = getNextInt();
			} else {
				offset = i;
			}
			return parsedInt;
		}
	}

}
