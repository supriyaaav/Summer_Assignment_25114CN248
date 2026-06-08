#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("enter number :");
    scanf("%d",&n);
    
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d",b);
    }
    else
    {

    for(i=3;i<=n;i++)
    
       { c=a+b;
        a=b;
        b=c;
       }
    
     printf("Fibinacci term =%d",c);
    }
return 0;

}