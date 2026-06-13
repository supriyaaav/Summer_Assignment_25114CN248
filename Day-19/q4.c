#include<stdio.h>

int main()
{
    int i, j, n , sum=0;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

   printf("Sum of diagonal element :");

   for(i =0 ; i<n ; i++)
   {
    sum = sum + a[i][i];
   }
   printf("%d" , sum);

   return 0;
}
