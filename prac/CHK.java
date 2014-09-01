    import java.math.*;
    import java.util.*;
    import java.lang.*;
    import java.io.*;

    class CHK
    	   {

    public static void main (String[] args) throws java.lang.Exception
    {
    Scanner sc = new Scanner(System.in);
    BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
    int t=sc.nextInt();
    for(int g=0;g<t;g++)
    {

    int n=sc.nextInt();

    BigInteger arr[]=new BigInteger[n];
    BigInteger u[]=new BigInteger[n];
    BigInteger v[]=new BigInteger[n];

    for(int i=0;i<n;i++)
    {
    arr[i] = sc.nextBigInteger();
    }

    BigInteger a = new BigInteger("1");
    BigInteger b = new BigInteger("2");

    BigInteger p = sc.nextBigInteger();
    BigInteger q = sc.nextBigInteger();
    BigInteger r = sc.nextBigInteger();

    String s;
    s = in.readLine();


    for(int i=0;i<n;i++)
    {

    //System.out.println("abc");

    char z=s.charAt(i);
    if(z=='A')
    {
    System.out.println("abc");
    u[i]=(a.add(p));
    }
    else
    if(z=='M')
    {
    v[i]=(b.multiply(q));
    u[i]=(a.multiply(q));
    }
    }

    System.out.println("abc");
    }

    }
}