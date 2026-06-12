#include<stdio.h>
void main()
{
    int i , j, a[10] , sum;

    printf("Enter element : ");

    for (i = 0 ; i<8 ;  i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter target sum :");
    scanf("%d", &sum );

     for (i = 0 ; i<5 ;  i++)
     {
         for (j = i+1 ; j<5 ;  j++)
         {
            if(a[i]+a[j]==sum)
            {
                printf("%d %d\n" ,a[i] , a[j] );
            }
         }
     }    
}