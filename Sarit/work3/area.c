#include <stdio.h>
    float main()
    {
        float x,y,choice;
        printf("1. Rectangle\n");
        printf("2. Triangle\n");
        printf("3. Circle\n");
        printf("Enter your choice: ",choice);
        scanf("%f",&choice);
        if(choice==1)
        {
            printf("Enter the width: ",x);
            scanf("%f",&x);
            printf("Enter the height: ",y);
            scanf("%f",&y);
            if (x==0 || y==0)
            {
                printf("The area of the rectangle is: Error");
            }
            else if (x<0 || y<0)
            {
                printf("The area of the rectangle is: %.2f",x*y);

            }
            else 
            {
                printf("The area of the rectangle is: %.2f",x*y);
            }
        }
        else if(choice==2)
        {
            printf("Enter the base: ",x);
            scanf("%f",&x);
            printf("Enter the height: ",y);
            scanf("%f",&y);
            if (x=0||y=0)
            {
                printf("The area of the triangle is: Error");
            }
            else 
            {
                printf("The area of the triangle is: %.2f",(x*y)/2);
            }
          
        }
          else if(choice==3)
        {
            printf("Enter the radius: ",x);
            scanf("%f",&x);
            if (x=0)
            {
                printf("The area of the circle is: Error");
            }
            else 
            {
                printf("The area of the circle is: %.2f",3.14*x*x);

            }
        }
        else 
        {
            printf("Invalid choice");
        }
    }