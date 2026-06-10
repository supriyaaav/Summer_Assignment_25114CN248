#include<stdio.h>
int main()
{
    int i, a[100] ,even =0 , odd=0;

    printf("Enter element :\n");

    for (i = 0; i<5 ; i++)
    scanf("%d",&a[i]);

    for(i=0 ; i<5 ; i++)
    {
        if(a[i]%2 == 0)
        even ++;

        else
        odd++;
    }
    printf("Even =%d\n",even);

    printf("Odd=%d\n",odd);
    
    return 0;
}