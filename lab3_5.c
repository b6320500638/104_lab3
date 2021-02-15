#include<stdio.h>
int main()
{
    int k,i=2,j=0,x=0,y=0,n;
    scanf("%d",&k);
    if(k>=0&&k<=10000)
    {
    n=k;
    while(k>1)
    {
            if(k%i==0)
            {
                if(x==i)
                {
                    y=1;
                }
                k=k/i;
                x=i;
                j++;
            }
            else
            {
                i++;
            }

    }
    if(j!=3||y)
            {printf("%d is not a Lucky Number.",n);}
    else if(j==3)
            {printf("%d is a Lucky Number.",n);}
    }
}
