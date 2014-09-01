import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
class FAKETSP
{


	public static void main(String args[])throws IOException
	{
		Scanner input=new Scanner(System.in);
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s[],f="",k="";
		double a[],b[];
		int n=0,m=0;
		double j;
		s=new String[10000];
		a=new double[1000];
		b=new double[1000];
		int i=0;
		 while(input.hasNext())
         {
		s[i]=input.nextLine();

		int l=s[i].length();
		int y=s[i].indexOf('(');
		int c=s[i].indexOf(',');
		int e=s[i].indexOf(')');
		f=s[i].substring(y+1,c);
		k=s[i].substring(c+1,e);
		a[m++]=Double.parseDouble(f);
		b[n++]=Double.parseDouble(k);

		i++;
		}
		double sum=0;
		for(i=0;i<m-1;i++)
		{
			sum=sum+Math.sqrt(((a[i]-a[i+1])*(a[i]-a[i+1]))+((b[i]-b[i+1])*(b[i]-b[i+1])));

			DecimalFormat df = new DecimalFormat("0.000");
			System.out.printf("The salesman has traveled a total of "+df.format(sum)+" kilometers.");
			System.out.println();
		}
	}
}