#include<stdio.h>

int max(int a, int b )
{
    if(a<b)
    return b;

    else
    return a;
}

int main()
{
    int a ,b ;
    printf("Enter a and b :");
    scanf("%d%d", &a, &b);

    printf("Maximum :%d",max(a,b));

    return 0;
}