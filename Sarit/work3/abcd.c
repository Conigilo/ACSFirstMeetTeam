#include <stdio.h>
    int main ()
    {
        int arr[4] = {},i,sum; 
        for(i=0;i<4;i++)
        {
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
        }
        printf("%d",sum);
    }