#include<stdio.h>
int main()
{
    int i  ,j, k;
     int a[2][2];
     int b[2][2];
     int c[2][2];
     printf("Enter first matrix element:\n");

     for(i=0 ; i <2 ; i++)
     {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
     }
      printf("Enter second matrix element:\n");

     for(i=0 ; i <2 ; i++)
     {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d" , &b[i][j]);
        }
     }
     
     printf("Multiplication of matrix :\n");

     for(i=0 ; i <2 ; i++)
     {

        for(j=0 ; j<2 ; j++)
        {
        c[i][j]=0;
        
         for(k=0 ; k<2 ; k++)
         {
            c[i][j] +=a[i][k]*b[k][j];
         }
        }
     }
      
     for (i=0 ; i<2 ; i++)
     {
        for(j=0 ; j<2 ; j++)
        {
            printf("%d  " , c[i][j]);
        }
        printf("\n");
     }
     return 0;


}