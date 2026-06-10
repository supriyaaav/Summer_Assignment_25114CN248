#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}

int main()
{
    int a, b ;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    printf("Sum = %d",sum(a,b));

    return 0;
}