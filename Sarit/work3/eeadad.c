#include <stdio.h>
    int main ()
    {
        int x,i;
        scanf("%d",&x);
        for(i=1;i<=12;i++)
        {
        printf("%d * %d = %d\n",x,i,x*i);
        }
    }