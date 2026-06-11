#include<stdio.h>
int main()
{
    int i, key, count=0 , a[6];

    printf("Enter element of an array: ");

    for(i=0 ; i<=6 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element :");
    scanf("%d", &key);

    for(i=0 ; i<= 6 ; i++)
    {
     if(a[i]==key)
     count++;

    }
    printf("Frequency of element:%d",count);
      
    return 0;
}