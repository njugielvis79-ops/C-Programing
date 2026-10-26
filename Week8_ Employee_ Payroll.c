#include <stdio.h>

struct Employee
{
  char id[10];
  char name[30];
  char department[20];
  float basicSalary;
  float allowance;
};

float calculateGrossSalary(struct Employee e)
{
  float gross;

  gross = e.basicSalary + e.allowance;

  return gross;
}

int main()
{
  struct Employee emp[3];
  int i;

  for (i = 0; i < 3; i++)
  {
    printf("\nEmployee %d\n", i + 1);

    printf("Enter ID: ");
    scanf("%s", emp[i].id);
    printf("Enter Name: ");
    scanf("%s", emp[i].name);
    printf("Enter Department: ");
    scanf("%s", emp[i].department);
    printf("Enter Basic Salary: ");
    scanf("%f", &emp[i].basicSalary);
    printf("Enter Allowance: ");
    scanf("%f", &emp[i].allowance);
  }

  printf("\n------------------------------------------\n");
  printf("         EMPLOYEE PAYROLL REPORT\n");
  printf("------------------------------------------\n");
  printf("ID    Name      Department  Gross Salary\n");
  printf("------------------------------------------\n");

  for (i = 0; i < 3; i++)
  {
    printf("%-6s%-10s%-12s%.2f\n",
           emp[i].id,
           emp[i].name,
           emp[i].department,
           calculateGrossSalary(emp[i]));
  }

  printf("------------------------------------------\n");

  return 0;
}