#include <stdio.h>
 int main ()
    {
        int arr[10] = {},i=0,j=0,temp; //ประกาศตัวแปร
        for(i=0;i<10;i++) 
        {
        scanf("%d",&arr[i]); //รับค่า i 10 ใน ลงใน array
        }
        for(i=0;i<10-1;i++) // i<10-1 คือตำแหน่ง -1 ,i++ คือการทำตัวต่อไป
        {
           for(j=0;j<10-i-1;j++){ // j<10-i-1 คือการล็อคตำแหน่งตัวสุดท้ายที่ swap
           if(arr[j]<arr[j+1]) //ถ้าทางซ้ายน้อยกว่าทางขวา 
           {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
           }
           }
        }
        for(i=0;i<10;i++)
        {
            printf("%d ",arr[i]);
        }
    }