#include<stdio.h>
int factorial(int n)
{
    int i , fact=1;
    for( i =1 ; i<= n ; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;

    printf("Enter the value of n :");
    scanf("%d",&n);

    printf("Factorial = %d",factorial(n));

    return 0;
}