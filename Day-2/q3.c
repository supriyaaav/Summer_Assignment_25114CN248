#include<stdio.h>
int main()
{
    int n,r,prod=1;
    printf("Enter number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        prod=prod*r;
        n=n/10;
    }
    printf("Product of digits is %d",prod);
    return 0;
}