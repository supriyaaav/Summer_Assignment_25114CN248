#include<stdio.h>
int main()
{
    int i ,j ,n , flag ;

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
    
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
                if(a[i][j]!=a[j][i])
                {
                    flag =0;
                 break;
                }
        }
       
    }
    if(flag)
    {
        printf("Symmetric");
    }
    else
    {
        printf("Not Symmetric");
    }


    return 0 ;

}