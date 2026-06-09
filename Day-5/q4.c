#include<stdio.h>
int main()
{
    int i;
    long long n;
    long long largest=0;
    printf("Enter a number:");
    scanf("%lld",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
          largest =i;
          n=n/i;

        }

    }
printf("Largest Prime factore:%lld",largest);
return 0;
}