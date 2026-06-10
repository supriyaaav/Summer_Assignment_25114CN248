#include<stdio.h>
int armstrong ( int n )
{
    int r, temp , sum=0;
    temp=n;
    while(n!=0)
    {
        r = n%10;
        sum = sum +r*r*r;
        n = n/10;
    }
    return sum ==temp;
}
int main()
{
    int n;

    printf("Enter n:");
    scanf("%d",&n);

    if(armstrong(n))
    printf("Armstrong number");

    else
    printf("Not Armstrong number");

    return 0;
}