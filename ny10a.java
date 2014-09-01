import java.io.*;
class ny10a
{
public static void main(String args[])throws IOException
{
DataInputStream br=new DataInputStream(System.in);
int i,j,t;
t=Integer.parseInt(br.readLine());
while(t>0)
{
int k=Integer.parseInt(br.readLine());
String s,r="";
s=br.readLine();
int a[],c=0;
a=new int[10];
for(i=0;i<8;i++)
a[i]=0;
for(i=0;i<40;i=i+3)
{
r=substring(i,i+2);
if(r.equals("TTT"))
a[0]++;
else if(r.equals("TTH"))
a[1]++;
else if(r.equals("THT"))
a[2]++;
else if(r.equals("THH"))
a[3]++;
else if(r.equals("HTT"))
a[4]++;
else if(r.equals("HTH"))
a[5]++;
else if(r.equals("HHT"))
a[6]++;
else if(r.equals("HHH"))
a[7]++;
}
for(i=0;i<8;i++)
System.out.print(a[i]+" ");
System.out.println();
t--;
}
}
}
