#include<stdio.h>

struct student
{
    int roll;
    char name [20];
    float marks;
};

int main()
{
    struct student s[5];
    int i;

    printf("Enter student details :\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("Student %d\n" , i+1);
        
        printf("Name :");
        scanf("%s" ,&s[i].name);

        printf("Roll no. :");
        scanf("%d" ,&s[i].roll);

        printf("Marks :");
        scanf("%f" ,&s[i].marks);

    }

    printf("\nStudent Records\n");

    for(i=0 ; i<5 ; i++)
    {
        printf("\n Name :%s" ,s[i].name);
         printf("\n Roll no. :%d" ,s[i].roll);
          printf("\n Marks :%f" ,s[i].marks);

    }
    return 0;
}