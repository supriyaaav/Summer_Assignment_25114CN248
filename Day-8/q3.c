#include<stdio.h>
int main()
{
    char n;
    int i,j;

    printf("Enter alphabet n:");
    scanf("%c",&n);

    for(i='A';i<=n;i++)
    {
        for (j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");

    }
    return 0;
}