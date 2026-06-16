#include<stdio.h>
struct Ticket{
    int ticketno;
    char name[500];
    char destination[500];
    float fare;
};
int main()
{
    struct Ticket t;

    printf("Passenger Name :");
    scanf("%s" , t.name);

    printf("Ticket no. :");
    scanf("%d" , &t.ticketno);

    printf("Destination :");
    scanf("%s" , t.destination);

    printf("Total Fare :");
    scanf("%f" ,& t.fare);

    printf("\n----Passenger Details-----\n");

    printf("Name :%s\n" , t.name);
    printf("Ticket no :%d\n" , t.ticketno);
    printf("Destination :%s\n" ,t.destination);
    printf("Fare :%f\n" , t.fare);

    return 0;
}