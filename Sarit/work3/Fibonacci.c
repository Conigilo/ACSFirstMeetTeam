#include <stdio.h>
    int main ()
    {
        int x=0,y=1,i; //ประกาศตัวแปร เราสามารถกำหนด x y ได้เลย
        for(i=0;i<=4;i++){ 
        
            printf("%d ",x);
            x = x+y;
            printf("%d ",y);
            y = y+x;
        }
        
       
    }

    // ตัวแรก + ตัวสอง = ตัว 3 **