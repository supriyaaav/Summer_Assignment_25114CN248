#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char word [5][10];
    char temp[50];

    printf("Enter word : ");
    for(i=0 ; i<5 ; i++)
    gets(word[i]);

    for(i=0 ; i<4 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
          if(strlen(word[i])>strlen(word[j]))
          {
            strcpy(temp,word[i]);
            strcpy(word[i],word[j]);
            strcpy(word[j],temp);
          }
        }
    }
    printf("Word sorted by length : ");

    for(i=0 ; i<5 ; i++)
    {
    printf("%s\n" ,word[i]);
    }
    return 0;

}