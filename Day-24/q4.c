#include<stdio.h>
#include<string.h>

int main()
{
    int i ,j ,duplicate;
    char str[100];

    printf("Sentence:");
    gets(str);

    printf("After removing duplicate character :");

    for(i=0 ; str[i]!='\0' ; i++)
    {
        duplicate=0;
        for(j=0 ; j<i ; j++)
        {
            if(str[i]==str[j])
            {
                duplicate =1;
                break;
            }
        }
        if(duplicate==0)
        {
            printf("%c" , str[i]);
        }
    }
    return 0;
}