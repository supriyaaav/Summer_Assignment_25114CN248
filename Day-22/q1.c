#include<stdio.h>  
int main()
{
    int i=0, len=0, flag=1;
    char str[20];

    printf("Enter string");
    gets(str);
     
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=0 ; i<len/2; i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=0;
            break;
        }
    }

    if(flag)
    {
        printf("Palindrome");
    }
    

    else
    {
          printf("Not palindrome");

    }
  
  
    return 0;

}