#include<stdio.h>
int main()
{
    int x,max;
    scanf("%d",&x);
    int y[x],z[x],a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
        fflush(stdin);
        scanf("%d",&z[i]);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
    {
        if(y[i]==y[j])
            {
                a[i]=z[i]+z[j];
            }

    }
    max=a[0];
     for(int j=0;j<x;j++)
    {
        if(max<a[i])
            {
               max=a[i];
            }
    }
     for(int j=0;j<x;j++)
    {
        if(max==a[i])
            {
              printf("%d %d",i,max);
            }
    }
    }
}
