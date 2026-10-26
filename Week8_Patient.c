#include <stdio.h>

struct Patient
{
  char id[10];
  char name[50];
  int age;
  char gender[10];
  char diagnosis[50];
  int days;
};

int main()
{
  struct Patient p;

  printf("Enter Patient ID: ");
  scanf("%s", p.id);
  printf("Enter Patient Name: ");
  scanf("%s", p.name);
  printf("Enter Age: ");
  scanf("%d", &p.age);
  printf("Enter Gender: ");
  scanf("%s", p.gender);
  printf("Enter Diagnosis: ");
  scanf("%s", p.diagnosis);
  printf("Enter Days Admitted: ");
  scanf("%d", &p.days);

  printf("\n------------------------------\n");
  printf("   PATIENT ADMISSION REPORT\n");
  printf("------------------------------\n");
  printf("Patient ID    : %s\n", p.id);
  printf("Patient Name  : %s\n", p.name);
  printf("Age           : %d\n", p.age);
  printf("Gender        : %s\n", p.gender);
  printf("Diagnosis     : %s\n", p.diagnosis);
  printf("Days Admitted : %d\n", p.days);
  printf("------------------------------\n");

  return 0;
}