#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n==0)
    {
        count =1;
    }
            n=n/10;
            count++;
        }
    }
    printf("Number of digits is %d",count);
    return 0;
}
