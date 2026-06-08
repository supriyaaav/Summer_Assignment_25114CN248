#include<stdio.h>
int main()
{
    int a,b,i,j,prime;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("Prime numbers are :");
    for(i=a;i<=b;i++)
    {
        if(i<2)  
            continue;


            prime =1;
        
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                prime=0;
                break;
            }
        }
    
    if(prime==1)
printf("%d\n",i);
    }
    return 0;
}

