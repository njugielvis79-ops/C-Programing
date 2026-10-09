#include <stdio.h>

double calculateElectricBill(int units) 
{
    if (units <= 100)
        return units * 10;
    else if (units <= 200)
        return 100 * 10 + (units - 100) * 15;
    else
        return 100 * 10 + 100 * 15 + (units - 200) * 20;
}

int main() {
    int units;
    printf("Enter units: ");
    scanf("%d", &units);
    printf("Total bill: KSh. %.2f\n", calculateElectricBill(units));
    return 0;
}