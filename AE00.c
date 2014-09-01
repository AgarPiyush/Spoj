#include<stdio.h>
int main()
{
    long long int n,i,j,c=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;(i*j)<=n;j++)
        {
            if(i>=j)
                c++;
        }

    }
    printf("%lld\n",c);

}
