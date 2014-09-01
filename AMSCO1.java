import java.io.*;
import java.util.*;
class AMSCO1
{
	public static void main(String args[])throws IOException
	{
		Scanner input=new Scanner(System.in);
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		while(input.hasNext())
		{

		String s,h,s1,a[][];
		int i,j,l1,l,k;
		s=input.nextLine();
		a=new String[500][10];
		k=s.indexOf(" ");
		h=s.substring(0,k);
		s1=s.substring(k+1);

		l=s1.length();
		l1=h.length();
		int b=1,c=1;
		j=l;
		for(i=0;i<l;i++)
		{
			if(j>=2)
			{
				a[b][c++]=s1.substring(i,i+2);
				i=i+2;
				j=j-2;
				if(c>l1)
				{
					c=1;
					b++;
				}
			}
			if(j>=1)
			{
				a[b][c++]=s1.substring(i,i+1);
				j--;
				if(c>l1)
				{
					c=1;
					b++;
				}
			}
		}
		int flag=0;
		int pos[];
		pos=new int[10];
		for(i=0;i<l1;i++)
		{
			int temp=h.charAt(i)-48;
			pos[temp]=i+1;
		}
		for(i=0;i<10;i++)
		{
			if(pos[i]>0)
			{
				for(j=1;;j++)
				{
					if(a[j][pos[i]]!=null)
						System.out.print(a[j][pos[i]]);
							else
								break;
				}
			}
		}
		}
}
}