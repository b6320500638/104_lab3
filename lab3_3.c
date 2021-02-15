#include<stdio.h>
int main()
{
    int k,i=2;
    scanf("%d",&k);
    if(k>=1&&k<=1000)
    {
    while(k>1)
    {
        if(k%i==0)
        {
            k=k/i;
            printf("%d\n",i);
            i=2;
            if(k==1)
            {printf("0");}
        }
        else
        {
            i++;
        }
    }
    }
}
