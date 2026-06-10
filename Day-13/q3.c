#include<stdio.h>
int main()
{
    int i , a[8] ,max ,  min;
    printf("Enter element of an array:");

    for(i=0 ; i<5 ; i++)
    scanf("%d",&a[i]);

    max=min=a[0];
    for(i=0 ; i<5 ; i++)
    {
        if(a[i]>max)
        {
            max= a[i];
        }

        if(a[i]<min)
        {
            min = a[i];
        }
    }
    printf("Largest element =%d\n", max);

    printf("Smallest elemnt =%d\n",min);

    return 0;
}