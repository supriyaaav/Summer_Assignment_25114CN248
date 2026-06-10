#include<stdio.h>
int palindrome( int n )
{
    int rev =0,temp , r;
    temp = n;

    while(n!=0)
    {
        r=n%10;
        rev = rev*10 +r;
        n=n/10;

    }
    return rev == temp;

    
}
int main()
{
    int n;
    
    printf("Enter n:");
    scanf("%d",&n);

    if(palindrome(n))
     printf("palindrome number");

     
    else
    printf("Not palindrome number");

    return 0;
     
}