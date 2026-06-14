#include<stdio.h>
int main()
{
    int i=0 , j=0 , words=1 ;
    char str[100];

    printf("Sentence :");
    gets(str);

   for(i=0 ; str[i]!='\0' ; i++)
    {
        if(str[i]!=' ')
        {
          str[j]=str[i];
          j++;
        }

    }
    str[j]='\0';

    printf("%s ", str);

    return 0;

}