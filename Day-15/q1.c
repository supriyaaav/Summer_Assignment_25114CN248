#include<stdio.h>
int main()
{
    int i,a[5];

    printf("enter element :");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d" , &a[i]);
    }

    for(i=5 ; i>=0 ; i--)
    {
        printf("%d\n" , a[i]);
    }

    return 0 ;
}