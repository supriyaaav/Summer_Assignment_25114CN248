#include<stdio.h>

struct Product
 {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main()
{
    struct Product p;
     printf("Enter Product ID :");
     scanf("%d" , &p.id);

     printf("Enter Product name :");
     scanf("%s" , p.name);

     printf("Enter Quantity :");
     scanf("%d" , &p.quantity);

     printf("Enter price :");
     scanf("%f" , &p.price);

     printf("\n=====INVENTORY DETAILS=====\n");

     printf("Name :%c\n" , p.name);
     printf("ID :%d\n" , p.id);
     printf("Quantity :%d\n" , p.quantity);
     printf("Price :%.2f\n" , p.price);

     printf("Total Price :%.2f\n" , p.quantity*p.price);


     return 0;

}