#include<stdio.h>
int main()
{
    int i,j,count;
    char str[100];

    printf("Enter string :");
    gets(str);

        for(i=0 ; str[i]!='\0' ; i++)
        {
            
            for(j=0 ; str[j]!='\0' ; j++)
            {
                if(str[i]==str[j])
                {
                  printf("First repeating character : %c",str[i]);
                 return 0;
                }
            }

        }
    
  return 0;
}