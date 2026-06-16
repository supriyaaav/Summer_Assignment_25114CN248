#include<stdio.h>
struct Book{
    int id;
    char name[50];
    char author[50];
};
int main()
{
    struct Book b;
    printf("Enter book id :");
    scanf("%d" , &b.id);

    printf("Enter Book name :");
    scanf("%s" , b.name);

    printf("Enter Author name :");
    scanf("%s" , b.author);

    printf("\n====Library record =====\n");

    printf("Book ID :%d\n" , b.id);
    printf("Book name :%s\n" , b.name);
    printf("Author :%s\n" , b.author);

    return 0;
}