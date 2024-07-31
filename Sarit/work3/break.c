#include <stdio.h>
    int main ()
    {
     int x,i, z=0;
     for (i=1;i<=10;i++){
        scanf("%d",&x);
        z = x+z;
        if (x<=0)
        {
            break;
        }
     }
     printf("%d",z);
    }