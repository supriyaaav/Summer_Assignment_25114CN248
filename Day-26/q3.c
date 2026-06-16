#include<stdio.h>
int main()
{
    int choice;
    float balance =50000 , amount;

    do
    {
        printf("\n1.Check balance");
        printf("\n2.Deposit");
        printf("\n3.Withdraw");
        printf("\n4.Exit");

        printf("\n Enter choice :");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
            printf("Balance = %.2f\n" , balance);
            break;

            case 2:
            printf("Amount : ");
            scanf("%f" , &amount);

            balance = balance +amount;

            printf("Amount deposite \n");
            break;

            case 3:
            printf("amount :");
            scanf("%f" , &amount);

            if(amount<=balance)
            {
                balance = balance -amount ;

                printf("Withdrawal successful\n");
            }
            else
            {
                printf("Insufficient balance \n");
            }
            break;

            case 4:
            printf("Thanks!!");
            break;

            default:
            printf("Invalide choice \n");
    
        }
    } while (choice!=4);
    return 0;
    
}