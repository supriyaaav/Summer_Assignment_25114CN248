#include<stdio.h>
struct Student{
    int roll;
    char name[100];

    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    
    int total ;
    float percentage;

};
int main()
{
    struct Student s;

    printf("Student name:");
    scanf("%s" , s.name);

    printf("Roll no. :");
    scanf("%d" , &s.roll);

    printf("Enter marks of 5 subjects :\n");

    scanf("%d", &s.sub1);
    scanf("%d", &s.sub2);
    scanf("%d", &s.sub3);
    scanf("%d", &s.sub4);
    scanf("%d", &s.sub5);

    s.total  = s.sub1 + s.sub2 + s.sub3 + s.sub4 + s.sub5;
    s.percentage = s.total /5.0;

    printf("\n=====MARKSHEET ======\n");

    printf("Name :%s\n", s.name);

    printf("Roll no. :%d" , s.roll);

    printf("Subject marks\n:");
    printf("Subject 1: %d\n" , s.sub1);
    printf("Subject 2: %d\n" , s.sub2);
    printf("Subject 3: %d\n" , s.sub3);
    printf("Subject 4: %d\n" , s.sub4);
    printf("Subject 5: %d\n" , s.sub5);

    printf("\n Total :%d\n" , s.total);

    printf("\nPercentage :%.2f\n" , s.percentage);

    if(s.percentage>=90)
    printf("Grade :A+\n");

   else if(s.percentage>=80)
    printf("Grade :A\n");

   else if(s.percentage>=70)
    printf("Grade :B\n");

    else if(s.percentage>=60)
    printf("Grade :C\n");

   else if(s.percentage>=50)
    printf("Grade :D\n");

   else if(s.percentage>=40)
    printf("Grade :E\n");

    else
    printf(" Grade :FAIL\n");

    return 0;
}