#include<stdio.h>
struct Books{
    int id;
    char name[20];
};
int main()
{
    struct Books b[3];
    int i;

    for(i=0 ; i<3 ; i++)
    {
        printf("Book ID :");
        scanf("%d" , &b[i].id);

        printf("Book Name :");
        scanf("%s" , b[i].name);

    }
    printf("\n====LIBRARY RECORD====\n");

    for(i=0 ; i<3 ; i++)
    {
        printf("Book ID :%d\n" , b[i].id);
        printf("Book name :%s\n" ,b[i].name);
    }
    return 0;
}