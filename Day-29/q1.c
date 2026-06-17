#include<stdio.h>
int main()
{
    int choice;
    float a,b;

    do
    {
        printf("\n1.ADDITION\n");
        printf("\n2.SUBTRACTION\n");
        printf("\n3.MULTIPICATION\n");
        printf("\n4.DIVISION\n");
        printf("\n5.EXIT\n");

        printf("Enter choice :\n");
        scanf("%d" , &choice);

        if(choice>=1&&choice<=5)
        {
            printf("Enter two number :\n");
            scanf("%f%f" , &a,&b);
        }

        switch(choice)
        {
            case 1:
            printf("Result :%.2f" ,a+b);
            break;

            case 2:
            printf("Result :%.2f" , a-b);
            break;

            case 3:
            printf("Result :%.2f" , a*b);
            break;

            case 4:
            printf("Result : %.2f"  ,a/b);
            break;

            case 5:
            printf("Thanks!!");
            break;

            default:
            printf("Invalid choice");
        }
    } while (choice!=5);
    return 0;
    
}