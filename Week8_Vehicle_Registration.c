#include <stdio.h>

struct Vehicle
{
  char regNo[15];
  char model[30];
  char manufacturer[30];
  int year;
  float dailyFee;
};

int main()
{
  struct Vehicle v;

  printf("Enter Registration No: ");
  scanf("%s", v.regNo);
  printf("Enter Vehicle Model: ");
  scanf("%s", v.model);
  printf("Enter Manufacturer: ");
  scanf("%s", v.manufacturer);
  printf("Enter Year Manufactured: ");
  scanf("%d", &v.year);
  printf("Enter Daily Rental Fee: ");
  scanf("%f", &v.dailyFee);

  printf("\n------------------------------\n");
  printf("  VEHICLE REGISTRATION REPORT\n");
  printf("------------------------------\n");
  printf("Registration No. : %s\n", v.regNo);
  printf("Vehicle Model    : %s\n", v.model);
  printf("Manufacturer     : %s\n", v.manufacturer);
  printf("Year Manufactured: %d\n", v.year);
  printf("Daily Rental Fee : Ksh %.0f\n", v.dailyFee);
  printf("------------------------------\n");

  return 0;
}