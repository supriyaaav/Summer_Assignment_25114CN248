#include<stdio.h>
int main()
{
    int i,j;
    int a[]={9,8,7,6};
    int b[]={7,6,5,4};

    printf("Intersection of array : \n");

    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<4 ; j++)
        {
            if(a[i]==b[j])
            {
                printf("%d", a[i]);
            }
        }
    }
    return 0;
}