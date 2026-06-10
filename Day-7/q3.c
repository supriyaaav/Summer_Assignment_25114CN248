#include<stdio.h>
int sumdigit(int n)
{
    if(n==0)
    
    return 0;

    return n%10+sumdigit(n/10);
}
int main(){
    int n,r,sum=0;

    printf("Enter n:");

    scanf("%d",&n);

    printf("Sum of digit =%d",sumdigit(n));

    return 0;
}