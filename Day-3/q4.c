#include<stdio.h>
int main()
{
    int a,b,x,y,gcd,lcm;
    printf("enter two no. :");
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(y!=0)
    {
        gcd=x%y;
        x=y;
        y=gcd;

    }
    gcd=x;
    lcm=a*b/gcd;
    printf("LCM is %d",lcm);
    
        return 0;

}