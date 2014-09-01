import java.io.*;
class wordcount
{
    public static void main(String args[])throws IOException
	{
	DataInputStream br=new DataInputStream(System.in);
	String s,t="",f[];
	int i,j,q;
    q=Integer.parseInt(br.readLine());
	while(q>0)
	{
	int	d=0,k=0,max=0,flag=0;
	s=br.readLine();
    s=s.trim();
	f=new String[20000];
	for(i=0;i<s.length();i++)
	{
		char a=s.charAt(i);
		if(a!=' ')
		t=t+a;
		else
		{

		if(s.charAt(i+1)!=' ')
		{
		t=t.trim();
		f[d++]=t;
		t="";
		}
		}
	}
	f[d++]=t;
	t="";
	for(i=0;i<d-1;i++)
	{
		if(f[i].length()==f[i+1].length())
		{

			k++;
			flag=1;
			if(k>=max)
			{
				max=k;
		}
		}
		else k=0;
	}
	if(flag==1)
	System.out.println(max+1);
	else
		System.out.println("1");
		s="";
		q--;
	}
}
}