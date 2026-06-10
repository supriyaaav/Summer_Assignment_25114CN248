#include<stdio.h>
void fibonacci (int n)
{
 
       int a=0,b=1, c,i;
    if(n>=1)
    {
        printf("%d",a);
    }
    if(n>=2)
    {
        printf("%d",b);
    }
    for( i=3;i<=n ; i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    
}
int main()
{
    int n ;
    printf("Enter n :");
    scanf("%d",&n);

    fibonacci(n);
    return 0;
}