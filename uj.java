import java.io.*;
import java.math.*;
class uj
{
public static void main(String args[])throws IOException
{
int n,d,i,m;
DataInputStream br=new DataInputStream(System.in);
n=Integer.parseInt(br.readLine());
d=Integer.parseInt(br.readLine());
while(n!=0||d!=0)
{
String i=Integer.toString(n);
String j=Integer.toString(d);
int t;
BigInteger a=new BigInteger(i);
BigInteger b=new BigInteger(j);
BigInteger s=new BigInteger("1");
for(t=0;t<=d;t++)
BigInteger s=s.mutiply(a);
System.out.println(s);
n=Integer.parseInt(br.readLine());
d=Integer.parseInt(br.readLine());
}
}
}
