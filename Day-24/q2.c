#include<stdio.h>
int main()
{
    int i , count =0;
    char str[100];

    printf("Enter String :");
    gets(str);

    printf("Compressed string :");
    for( i=0 ; str[i]!='\0' ; i++)
    {
    count=1;
    
      while(str[i]==str[i+1])
      {
        count++;
           i++;
      }
   

    printf("%c%d" , str[i] , count);
    }
    return 0;

}