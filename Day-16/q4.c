#include<stdio.h>
int main()
{
    int i, j, a[5];

    printf("Enter element : ");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array after remove duplicates :\n");
    for(i=0 ; i<5 ; i++)
    {
        int duplicate =0;
        for (j=0 ; j<i ; j++)
        {
            if(a[i]==a[j])
            {
                duplicate=1;
                break;
            }
        }
        if (duplicate==0)
        printf("%d", a[i]);

    }
    return 0;
}