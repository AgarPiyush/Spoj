class hc
{
public static void main(String args[])throws IOException
{
DataInputStream br=new DataInputStream(System.in);
long i,j,n,t;
t=Long.parseLong(br.readLine());
while(t>0)
{
n=Integer.parseInt(br.readLine());
String s[];
s=new String[100000];
for(i=0;i<n;i++)
s[i]=br.readLine();
for(i=0;i<n-1;i++)
{
if(s[i].equals(s[i+1]));
s[i+1]="hbh";
else
s[i+1]="lxh";
}
if(s[n-1].equals("hbh"));
System.out.println("hbh");
else
System.out.println("lxh");
t--;
}
}
}
