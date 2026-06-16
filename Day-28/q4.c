#include<stdio.h>
struct Contact{
    int phone;
    char name [50];
    char email[20];
};
int main()
{
    struct Contact c;

    printf("Name :");
    scanf("%s" , c.name);

    printf("Mobile number :");
    scanf("%d" , &c.phone);

    printf("Email address :");
    scanf("%s" , c.email);

    printf("\n====CONTACT DETAILS====\n");

    printf("Contact name :%s\n" , c.name);
    printf("Contact number :%d\n" , c.phone);
    printf("Email :%s\n" , c.email);

    return 0;

}