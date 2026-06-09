#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;

    printf("Enter a number :");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;

    }
    if(sum==n)
    {
        printf("Armstrong number");
    }
    else{
        printf("Not armstrong number");

    }
    return 0;
}