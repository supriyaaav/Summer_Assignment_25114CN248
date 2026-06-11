#include<stdio.h>

int main()
{
    int flag =0 ,a[5] , i , key;

    printf("Enter 5 element of array : \n ");

    for(i = 0 ;i<5 ; i++)
    {
       scanf("%d",&a[i]);
    }

    printf("Enter element to  search :");
    scanf("%d",&key);

    for(i = 0 ; i<5 ; i++)
    {
        if(a[i]==key)
        {
            printf("The element is found at %d",i+1);
            flag =1;
            break;
        }
        }
    
        if(flag==0)
        {
     printf("Element not found");
}

    return 0;


}