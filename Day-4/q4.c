#include<stdio.h>

int main()
{
    int n,a,b, temp, r, sum = 0;

    printf("Enter two numbsers:");
    scanf("%d%d",&a,&b);
    printf("Armstrong numbers are :\n");
    for(n=a;n<=b;n++)
    {
        temp=n;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;

        
        }
        
        if(sum==n)
        {
            printf("%d\n",n);

        }
    }
    return 0;
}
    
