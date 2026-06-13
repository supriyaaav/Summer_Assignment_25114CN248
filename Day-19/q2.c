#include<stdio.h>
int main()
{
    int i , j ,n;

    printf("Enter size :");
    scanf("%d" , &n);

    int a[n][n];
    int b[n][n];
    int c[n][n];

    printf("Enter First matrix element:\n");

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf("Enter second matrix element :\n");

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("Subraction of matrices :\n");
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
                printf("%d \n",c[i][j]);
        }
    }


    return 0 ;

}