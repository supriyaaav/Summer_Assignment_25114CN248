#include<stdio.h>
int main()
{
    int roll[2];
    char name[20][80];
    float marks[50];
    int i;

    for(i=0 ; i<3 ; i++)
    {
        printf("\nStudent :%d\n" , i+1);

        printf("Enter name :");
        scanf("%s" , name[i]);

        printf("Enter roll No :");
        scanf("%d" , &roll[i]);

        printf("Enter marks :");
        scanf("%f" , &marks[i]);

    }

    printf("\n ====Student details====\n");

    for(i=0 ; i<3 ; i++)
    {
        printf("Name :%s\n" , name[i]);
        printf("RollNo :%d\n" , roll[i]);
        printf("Marks :%.2f\n" , marks[i]);
    }
    return 0;
}