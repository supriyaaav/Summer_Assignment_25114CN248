#include<stdio.h>
int main()
{
    int i , n ;

    printf("Enter size of an array : ");
    scanf("%d" , &n);

    int a[n-1];
    int sum=0;

    printf("Enter element :");

    for(i =0 ; i<n -1 ;i++)
    {
        scanf("%d" , &a[i]);
        sum = sum +a[i];
    }

    int total = n*(n+1)/2;

    int missing = total -sum ;

    printf("Missing element : %d", missing);

    return 0;


}