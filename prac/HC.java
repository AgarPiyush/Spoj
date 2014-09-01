import java.io.*;
import java.util.*;
import java.lang.*;
import java.math.*;
class done
{
	int mod=1000000007;
	int temp[];

	done()
	{
	}
	void all()
	{
		temp=new int[10010];
	}
	void merge(int a[],int l,int mid,int u)
	{
	int ac=l,bc=mid+1,cc=l,i;
	while(ac<=mid&&bc<=u)
	{
	if(a[ac]<a[bc])
	temp[cc++]=a[ac++];
	else
	temp[cc++]=a[bc++];
	}
	while(ac<=mid)
	temp[cc++]=a[ac++];
	while(bc<=u)
	temp[cc++]=a[bc++];
	for(i=l;i<cc;i++)
	a[i]=temp[i];
	}
	void mergesort(int a[],int l,int u)
	{
	int mid=(l+u)/2;
	if(l!=u)
	{
	mergesort(a,l,mid);
	mergesort(a,mid+1,u);
	merge(a,l,mid,u);
	}
	}
	int comb(int n,int r)
	{
	int i,pro=n,ans=1,min;
	if(n-r<r)
	min=n-r;
	else min=r;
	for(i=1;i<=min;i++)
	{
		ans=(ans*pro)%mod;
		pro--;
		ans=ans/i;
	}
	return ans;
	}
}
class HC
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
			done obj=new done();
		obj.all();
		int mod=1000000007;
		int t,a[],i,k,l,m,n;
		a=new int[10010];
		String s,s1[];
		s1=new String[10010];
		BigInteger arr[];
		arr=new BigInteger[10010];
		String ll;
		t=Integer.parseInt(br.readLine());
		BigInteger md=new BigInteger(Integer.toString(mod));
		BigInteger q=new BigInteger("0");
		BigInteger one=new BigInteger("1");

		while(t>0)
		{
			int sum=0;
			t--;
			ll=br.readLine();
			n=Integer.parseInt(ll.substring(0,ll.indexOf(' ')));
			k=Integer.parseInt(ll.substring(ll.indexOf(' ')+1));
			s=br.readLine();
			String pp;
			s1=s.split(" ");
			for(i=0;i<n;i++)
			{
			a[i]=Integer.parseInt(s1[i]);a[i]=a[i]%mod;
			sum=(sum+a[i])%mod;
			}
			if(k==1) System.out.println(sum);
			else
			{
			obj.mergesort(a,0,n-1);
			for(i=0;i<n;i++)
			arr[i]=new BigInteger(Integer.toString(a[i]));
			sum=0;
			int w=obj.comb(n-1,k-1);
			BigInteger sum1=new BigInteger("0");
			BigInteger w1=new BigInteger(Integer.toString(w));
			BigInteger p1=new BigInteger(Integer.toString(n-k));
			BigInteger p2=new BigInteger(Integer.toString(n-1));
			for(i=n-1;i>=k-1;i--)
			{
			q=(arr[i].multiply(w1)).mod(md);
			sum1=(sum1.add(q)).mod(md);
			w1=w1.multiply(p1);
			p1=p1.subtract(one);
			w1=w1.divide(p2);
			p2=p2.subtract(one);
			}
			sum1=sum1.mod(md);
			System.out.println(sum1);
			}
		}
	}
}