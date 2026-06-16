#include<stdio.h>
struct salary{

    char name[20];
    float basic, hra,da,total;
};
int main()
{
  struct salary emp;

  printf("Employee name :");
  scanf("%s" , emp.name);

  printf("Basic salary :");
  scanf("%f" , &emp.basic);

  emp.hra = emp.basic *0.20;
  emp.da = emp.basic *0.10;

  emp.total = emp.hra + emp.da + emp.basic;

  printf("\n Salary details :\n");

  printf("Name : %s\n", emp.name);
  printf("Basic salary :%.2f\n" , emp.basic);
  printf("HRA :%.2f\n" , emp.hra);
  printf("DA :%.2f\n" , emp.da);
  printf("Total salary : %.2f\n" , emp.total);

  return 0;
}
