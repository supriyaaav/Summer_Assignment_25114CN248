#include<stdio.h>
int main()
{
    int i=0, count =0;
    char str[100], ch;

    printf("Enter string :");
    gets(str);

    printf("enter character :");
    scanf("%c" ,&ch);
    
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            count++;
        }
        i++;
    }

    printf("Frequeny of character :%d ", count);

    return 0;

}