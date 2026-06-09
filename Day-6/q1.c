#include<stdio.h>
int main()
{
    int n,r,b[32],i=0;
    printf("Decimal number:");
    scanf("%d",&n);
    while(n!=0)
    {
       r=n%2;
       b[i]=r;
       i++;
       n=n/2;
       
    }
    printf("Binary=");
    for(i=i-1;i>=0;i--)

    {
     printf("%d",b[i]);
    }
return 0;
}