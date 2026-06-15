#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    char name [5][10];
    char temp[50];

    for(i=0 ; i<5 ; i++)
    gets(name[i]);

    for(i=0 ; i<4 ; i++)
    {
        for(j=i+1 ; j<5 ; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
               strcpy(temp,name[i]);
               strcpy(name[i],name[j]);
               strcpy(name[j],temp);
            }
        }
    }

    printf("Sorted Names :");

    for(i=0 ; i<5 ; i++)
    {
        printf("%s\n" , name[i]);
    }

    return 0;
}