#include<stdio.h>

int main()
{
    int i,j;
    char str1[100] , str2[100];

    printf("enter 1st String : ");
    gets(str1);

    printf("Enter 2nd string : ");
    gets(str2);

    printf("common Character : ");

    for(i=0 ; str1[i]!='\0' ; i++)
    {
        for(j=0 ; str2[j]!= '\0' ; j++)
        {
            if(str1[i]==str2[j])
            {
                printf("%c\n" , str1[i]);
            }
        }
    }
    return 0;
}