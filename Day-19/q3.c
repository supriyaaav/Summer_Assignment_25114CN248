#include<stdio.h>
int main()
{
    int i ,j ,n;

    printf("Enter size :");
    scanf("%d" , &n);

    int a[n][n];
    
   printf("Enter  matrix element:\n");

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    
    printf("Transpose of matrices :\n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
                printf("%d ",a[j][i]);
        }
        printf("\n");
    }


    return 0 ;

}