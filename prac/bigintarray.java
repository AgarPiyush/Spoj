import java.io.*;
import java.math.*;
import java.lang.*;
import java.util.*;
class Main
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int i,temp1,temp2,j,len,n,t;
		String s1[],k[],s,a,b,c;
		s1=new String[100010];
		k=new String[100];
		BigInteger [] arr=new BigInteger[100010];
		t=Integer.parseInt(br.readLine());
		while(t>0)
		{
		t--;
		n=Integer.parseInt(br.readLine());
		s1=br.readLine().split(" ");
		k=br.readLine().split(" ");
		BigInteger a1=new BigInteger(k[0]);
		BigInteger b1=new BigInteger(k[1]);
		BigInteger c1=new BigInteger(k[2]);
		for(i=0;i<n;i++)
		{

			BigInteger q=new BigInteger(s1[i]);
			arr[i]=q;
		}
		s=br.readLine();
		i=0;
		int end=n-1,count=n,revcount=0;
		BigInteger mulc=new BigInteger("1");
		BigInteger sum=new BigInteger("0");
		for(count=0;count<n;count++)
		{

			if(s.charAt(count)=='A')
			{
				sum=sum.add(a1).mod(c1);
				System.out.print(arr[i].multiply(mulc).add(sum).mod(c1)+" ");
				if(((revcount&1))==1) i--;
				else  i++;
			}


			else if(s.charAt(count)=='M')
			{
				sum=sum.multiply(b1).mod(c1);
				mulc=mulc.multiply(b1).mod(c1);
				System.out.print(arr[i].multiply(mulc).add(sum).mod(c1)+" ");
				if(((revcount&1))==1) i--;
				else  i++;

			}
			else
			{
			System.out.print(arr[end].multiply(mulc).add(sum).mod(c1)+" ");
			if(end>=i)
			temp1=end-1;
			else
			temp1=end+1;

			temp2=temp1;
			temp1=i;
			i=temp2;
			end=temp1;
			revcount++;
			}
			}
					System.out.println();


		}


	}
}
