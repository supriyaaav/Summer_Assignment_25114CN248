#include<stdio.h>
int main()
{
    int i ,j,n,sum;
    printf("Enter size`:");
    scanf("%d" , &n);              
    int a[n][n];

    printf("Enter element :\n");

    for(i=0 ; i<n; i++)
    {
        for (j=0 ; j<n; j++)
        {
            scanf("%d" ,&a[i][j]);
        }
    }

     printf("row  wise sum :\n");

    for( i=0;i<n; i++)
    {
        sum=0;
        for(j=0 ; j<n; j++)
        {
            sum +=a[i][j];
        }
    
   

            printf("Row %d sum: %d" ,j+1,sum);
        
    }
    return 0;
}    
