#include<stdio.h>
int main()
{
    int i=0 , j=0 , k=0 ;
    int a[3] ={1,5,6};
    int b[3] ={2,3,4};
    int c[6] ;

     printf("Merged array :");

    while(i<3 && j<3)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }

    }

    while(i<3)
    c[k++]=a[i++];

    while(j<3)
    c[k++]=b[j++];

   for(i=0 ; i<6 ; i++)
   {
    printf("%d" , c[i]);
   }

   return 0;
}