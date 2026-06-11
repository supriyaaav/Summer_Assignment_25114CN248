#include<stdio.h>
int main()
{
    int i,j,a[6];

    printf("Enter element of an array:");

    for(i =0 ; i<5 ; i++)
    {
        scanf("%d", & a[i]);
    }

    printf("Duplicate element : ");

    for ( i=0 ; i<5 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);

                break;
            }
        }
    }

    return 0;
}