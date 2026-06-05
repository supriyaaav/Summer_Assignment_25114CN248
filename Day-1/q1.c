#include<stdio.h>
int main()
{
   int n,sum;
   printf("Enter a number:");

   scanf("%d",&n);
    sum=n*(n+1)/2 ;
    printf("the sum of first %d natural number is %d",n,sum);
    
    return 0;
}