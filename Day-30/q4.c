#include<stdio.h>
#include<string.h>

#define MAX 100

struct Student{
    int roll;
    char name[20];
    float marks;
};
struct Student s[MAX];
int count =0;

void addstudent()
{
    printf("\nEnter RollNo :");
    scanf("%d" ,&s[count].roll);

    printf("Enter Name :");
    scanf("%s" , s[count].name);

    printf("Enter Marks :");
    scanf("%f" , &s[count].marks);

    count++;

    printf("STUDENT ADDED SUCCESSFULLY!!\n");
}

void displaystudents()
{
    int i;
    if(count==0)
    {
        printf("\nRecord not found\n");
        return;
    } 

    printf("\n===STUDENT RECORDS===\n");
    for(i=0 ; i<count ; i++)
    {
        printf("Roll :%d\n" , s[i].roll);
        printf("Name :%s\n" , s[i].name);
        printf("Marks :%.2f\n" , s[i].marks);
    }
}
void searchstudent()
{
    int roll , i;
    for(i=0 ; i<count ; i++)
    {
        if(s[i].roll==roll)
        {
            printf("----Record found----\n");
            printf("Roll :%d\n" , s[i].roll);
            printf("Name :%s\n" , s[i].name);
            printf("Marks :%.2f\n" , s[i].marks);
            return;
        }
    }
    printf("Student not found.\n");
}
void updateStudent()
{
    int roll , i;

    printf("\nEnter Roll no to Update :");
    scanf("%d" , &roll);

    for(i=0 ; i<count ; i++)
    {
        if(s[i].roll==roll)
        {
            printf("Enter new name :\n");
            scanf("%s" , s[i].name);

            printf("Enter new marks :\n");
            scanf("%f" , &s[i].marks);

            printf("Record updated successfully !!");
            return;
        }
    }
    printf("Record not found!\n");
}
void deleteStudent()
{
    int roll , i ,j;

    printf("\nEnter roll no to delete:");
    scanf("%d" , &roll);

    for(i=0 ; i<count ; i++)
    {
        if(s[i].roll==roll)
        {
            for(j=i ; j<count-1 ; j++)
            {
                s[j]s[j+1];
            }
            count--;
            printf("Record Deleted successfully!\n");
            return;
        }
    }
    printf("Student not found!!\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n====STUDENT RECORD MANAGEMENT SYSTEM====\n");
        printf("\n1.Add student \n");
        printf("\n2.Display students\n");
        printf("\n3.Update student\n");
        printf("\n4.Search student\n");
        printf("\n5.Delete studen\n");
        printf("\n6.Exit\n");

        printf("Enter choice :");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
            addStudent();
            break;

            case 2:
            displaystudent();
            break;

            case 3:
            updateStudent();
            break;

            case 4:
            searchstudent();
            break;

            case 5:
            deleteStudent;
            break;

            case 6:
            printf("EXITNG---\n");
            break;

            default:
            printf("Invalide choice !!!\n");
        }
        
    } while (choice!=6);
    
    return 0;
    
}