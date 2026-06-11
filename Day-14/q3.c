#include<stdio.h>
int main()
{
    int a[5], i ;

    printf("Enter element of an array :");

    for(i=0; i< 5 ; i++)
    {
        scanf("%d", &a[i]);
    }

    

    int largest =a[0];
    int second = a[0];

    for( i =0 ; i< 5 ; i++)
    {
        if(a[i]>largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i]>second && a[i]!= largest)
        {
            second = a[i];
        }
    }

    printf("Second largest element is :%d",second);

    return 0;
}