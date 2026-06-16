#include<stdio.h>
struct Bank
{
    int accNo;
    char name[50];
    float Balance;
};
int main()
{
    struct Bank b;
    float amount;

    printf("Account number :");
    scanf("%d" , &b.accNo);

    printf("Name :");
    scanf("%s" , b.name);

    printf("Initial balance :");
    scanf("%f" , &b.Balance);

    printf("Deposite ammount :");
    scanf("%f" , &amount);
 
    printf("Withdraw ammount :");
    scanf("%f" , &amount);

    if(amount<=b.Balance)
    b.Balance-=amount;

    else
    printf("Insufficient Balance \n");

    printf("Current Balance :%2.f\n" , b.Balance);

    return 0;


}
