#include <stdio.h>
int main()
{
    // int arr[3][2];
    // printf("%d",arr[1][1]);
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("arr[%d][%d] ",j , i);
        }
        printf("\n");
    }
    return 0;
}
