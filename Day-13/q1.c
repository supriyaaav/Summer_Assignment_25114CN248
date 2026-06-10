#include<stdio.h>
int main()
{
    int arr[5] , i;

    printf("Enter element of an array :\n");


    for(i = 0 ; i<5  ; i++)
    scanf("%d",&arr[i]);


    printf("Array element are :\n");
    for(i = 0 ; i<5  ; i++)
    printf("%d",arr[i]);

    return 0;
}