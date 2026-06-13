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

     printf("Column wise sum:\n");

    for( i=0;i<n; i++)
    {
        sum=0;
        for(j=0 ; j<n; j++)
        {
            sum +=a[j][i];
        }
    
    printf("column%d sum %d   ",i+1,sum);
        
       printf("\n");
   
    }
   
    return 0;
}    
