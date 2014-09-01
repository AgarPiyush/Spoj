/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Piyush Agarwal
 */
import java.io.*;
public class hey {

    	static int a[][],b[][],i,j,k,l,m,n,o,p;
		static int c[][];

        public static void main(String args[])throws IOException
		{
        a=new int[6][6];
        b=new int[6][6];
        c=new int[6][6];
        b[1][2]=b[3][4]=b[3][8]=b[4][3]=b[5][4]=9;
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
			{
				if(b[i][j]==9)
				{
					if(i==1)
					iequalone();
					else if(i==5)
					iequalnine();
					else if(j==1)
					jequalone();
					else if(j==5)
					jequalnine();
					else
					{
						a[i-1][j-1]++;
						a[i-1][j]++;
						a[i-1][j+1]++;
						a[i][j-1]++;
						a[i][j+1]++;
						a[i+1][j-1]++;
						a[i+1][j]++;
						a[i+1][j+1]++;
					}
				}
			}
		}
		for(i=0;i<=5;i++)
		c[0][i]=a[0][i]=123;
		for(i=0;i<=5;i++)
		c[5][i]=a[5][i]=123;
		for(i=0;i<=5;i++)
		c[i][0]=a[i][0]=123;
		for(i=0;i<=5;i++)
		c[i][5]=a[i][5]=123;
		for(i=1;i<=4;i++)
		for(j=1;j<=4;j++)
		if(b[i][j]==9)
		a[i][j]=b[i][j];

	}




	void iequalone()
	{
					if(j==1)
					{
						a[i][j+1]++;
						a[i+1][j]++;
						a[i+1][j+1]++;
					}
					else if(j!=1&&j!=9)
					{
						a[i][j-1]++;
						a[i][j+1]++;
						a[i+1][j-1]++;
						a[i+1][j]++;
						a[i+1][j+1]++;
					}
					else if(j==9)
					{
						a[i][j-1]++;
						a[i+1][j-1]++;
						a[i+1][j]++;
					}
	}
	void iequalnine()
	{
		if(j==1)
		{
			a[i-1][j]++;
			a[i-1][j+1]++;
			a[i][j+1]++;
		}
		else if(j==4)
		{
			a[i][j-1]++;
			a[i-1][j-1]++;
			a[i-1][j]++;
		}
		else
		{
			a[i-1][j-1]++;
			a[i-1][j]++;
			a[i-1][j+1]++;
			a[i][j-1]++;
			a[i][j+1]++;
		}
	}
	void jequalone()
	{
		if(i==1)
		{
			a[i+1][j+1]++;
			a[i+1][j]++;
			a[i+1][j+1]++;
		}
		else if(i==4)
		{
			a[i-1][j]++;
			a[i-1][j+1]++;
			a[i][j+1]++;
		}
		else
		{
			a[i-1][j]++;
			a[i-1][j+1]++;
			a[i][j+1]++;
			a[i+1][j+1]++;
			a[i+1][j]++;
		}
	}
	void jequalnine()
	{
		if(i==1)
		{
			a[i][j-1]++;
			a[i+1][j-1]++;
			a[i+1][j]++;
		}
		else if(i==4)
		{
			a[i-1][j-1]++;
			a[i-1][j]++;
			a[i][j-1]++;
		}
		else
		{
			a[i-1][j]++;
			a[i+1][j]++;
			a[i-1][j-1]++;
			a[i][j-1]++;
			a[i+1][j-1]++;
		}

	}


	void forzero(int m,int n)
	{
		int o,p,flag=0;
		a[m][n]=-1;
		c[m][n]=-1;
		for(o=m-1;o<=m+1;o++)
		{
			for(p=n-1;p<=n+1;p++)
			{
				if((((o==(m-1))&&(p==n))||((o==(m+1))&&(p==n))||((o==(m))&&(p==n-1))||((o==(m))&&(p==n+1)))&&a[o][p]==0)
				{
					a[o][p]=-1;
					c[o][p]=-1;
					flag=1;
					forzero(o,p);

				}
				else
				{
					if(a[o][p]>0&&a[o][p]<9)
					c[o][p]=a[o][p];
				}
			}
		}
		if(flag==0)
		{
			return ;
		}

	}

	void checkmines(int m,int n)
	{
		if(a[m][n]==9)
		{
			for(i=1;i<=4;i++)
			{
				for(j=1;j<=4;j++)
				if(a[i][j]==9)
				c[i][j]=9;
			}
		}
		else if(a[m][n]>0)
		{
			c[m][n]=a[m][n];
		}
		else if(a[m][n]==0)
		{
			forzero(m,n);
		}
	}

}
