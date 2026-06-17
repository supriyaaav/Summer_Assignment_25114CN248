#include<stdio.h>
int main()
{
    int choice , array , a[5] , key ,sum=0 ,i, max;

    printf("Enter 5 element :\n");
    for(i=0 ; i<5 ; i++)
    {
      scanf("%d" , &a[i]);
    }

    do
    {
        printf("\n1.DISPLAY");
        printf("\n2.SUM");
        printf("\n3.LARGEST");
        printf("\n4.SEARCH");
        printf("\n5.EXIT\n");

        printf("Enter choice :");
        scanf("%d" , &choice);

        
        switch(choice)
        {
            case 1:
            for(i=0 ; i<5  ;i++)
            printf("%d" ,a[i]);
            break;

            case 2:
            sum=0;
            for(i=0 ; i<5 ; i++)
            sum+=a[i];
            printf("Sum :%d" , sum);
            break;

            case 3:
            max=a[0];
            for(i=0 ; i<5 ; i++)
            {
                if(a[i]>max)
                max=a[i];
            }
            printf("Largest:%d" , max);
            break;

            case 4:
            printf("Enter element :");
            for(i=0 ; i<5 ; i++)
            {
                if(a[i]==key)
                {
                    printf("Found");
                    break;
                }
            }
            break;
        }
    } while (choice!=5);
    return 0;
    
}