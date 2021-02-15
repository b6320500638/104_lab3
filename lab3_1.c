#include<stdio.h>
int main()
{
    int num[4],sum[5],max=0,pos;
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<4;i++)
        {
            scanf("%d",&num[i]);

        }
        sum[j]=num[0]+num[1]+num[2]+num[3];
    }
    for(int k=0;k<5;k++)
    {
        if(max<sum[k])
        {
            max=sum[k];pos=k+1;
        }
    }
    printf("%d %d",pos,max);
    return 0;
}
