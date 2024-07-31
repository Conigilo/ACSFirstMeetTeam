#include <stdio.h>
    int main (){

    int x,i,y;
    scanf("%d",&x);
    for (i=0; i<x ; i++) //แถวแรกที่ได้ เก็บค่าไว้ใน x
 {
        for(y=0 ; y<=i ; y++) //ดาวเพิ่ม
        { 
            printf("*"); //แสดงดาว
        }  
            printf("\n"); //ขึ้นบรรทัดใหม่
 }
    }
