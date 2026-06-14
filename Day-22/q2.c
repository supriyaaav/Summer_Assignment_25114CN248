#include<stdio.h>
int main()
{
    int i=0 , words=1 ;
    char str[100];

    printf("Sentence :");
    gets(str);

    while(str[i]!='\0')
    {
      if(str[i]==' ')
      {
        words++;
      }
      i++;
    }

    printf("no. pf words in a sentence :%d" , words);

    return 0;
}