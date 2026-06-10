#include<stdio.h>
int main()
{
    int i, sum =0 , a[5];
    float avg;

    printf("Enter element of an array :");

    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];

    }
    avg = (float) sum /5;
    
    printf("Sum = %d\n",sum);
    printf("Average = %.2lf\n",avg);

    return 0;

}