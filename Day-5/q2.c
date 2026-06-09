#include<stdio.h>
int main()
{
    int n,sum=0,r,i ,fact=1,temp;
    printf("Enetr a number:");
    scanf("%d",&n);
    temp=n;
   
    while(temp>0)
    {
        r=temp%10;
        fact=1;
        for(i=1;i<=r;i++)
    {  
    fact=fact*i;
    }
        sum=sum+fact;
        temp=temp/10;
        
    }
    if(sum==n)
    {
        printf("strong number");
    }
    else
    {
        printf("not a strong number");
    }
    return 0;
}