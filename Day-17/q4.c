#include<stdio.h>
int main()
{
    int i, j;
    int a[] = {10,20,30,50,60};
    int b[] = {10,20,50,90,80};

    printf("Common element :\n");

    for( i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(a[i]==b[j])
            {
                printf("%d\n",a[i]);
                break;
            }
        }
    }
    return 0;
}