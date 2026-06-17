#include<stdio.h>
struct Employee{

    int id[50];
    char name[20];
    float salary[40];
};
int main()
{
    struct Employee e[3];
    int i;

    for(i=0 ; i<3 ; i++)
    {
    printf("Employee Name :");
    scanf("%s" , e[i].name);

    printf("Employee ID :");
    scanf("%d" , &e[3].id);

    printf("Salary :");
    scanf("%f" , &e[3].salary);
    }

    printf("\nEMPLOYEE RECORDS\n");

    for(i=0 ; i<3 ; i++)
    {
        printf("ID :%d\n" , e[i].id);
        printf("Name :%s\n" , e[i].name);
        printf("Salary :%.2f\n" , e[i].salary);
    }

    return 0;
    

}