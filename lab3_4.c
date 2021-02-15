#include<stdio.h>
int main()
{
    int z,i,j;
    unsigned long int x;
    scanf("%lu",&x);

        for(i=1;i<=x;i++)
            {
                for(j=2;j<=i;j++)
                    if(i%j==0)break;
                    if (i==j)
                    z=i;
            }
    printf("%d",z);

    return 0;
}
