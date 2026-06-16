#include<stdio.h>

struct employee
{
    int id;
    char name [20];
    float salary;
};

int main()
{
    struct employee e[2];
    int i;

    printf("Enter employee details :\n");

    for(i=0 ; i<2 ; i++)
    {
        printf("Employee %d\n" , i+1);
        
        printf("Name :");
        scanf("%s" ,&e[i].name);

        printf("id :");
        scanf("%d" ,&e[i].id);

        printf("Salary :");
        scanf("%f" ,&e[i].salary);

    }

    printf("\nEmployee Records\n");

    for(i=0 ; i<2 ; i++)
    {
        printf("\n Name :%s" ,e[i].name);
         printf("\n Id :%d" ,e[i].id);
          printf("\n Salary :%f" ,e[i].salary);

    }
    return 0;
}