#include <stdio.h>

//function prototype
float calculateBill(int units);

int main() 
{

    int units;
    float bill;

    printf("Enter the units consumed: \t");
    scanf("%d", &units);

    //function call
    bill = calculateBill(units);

    printf("\n");
    printf("ELECTRICITY BILL PROGRAM \n");
    printf("======================== \n");
    printf("Units Consumed: %d \n", units);
    printf("Total Electricity Bill: Ksh %.2f \n", bill);
    printf("======================== \n");

    return 0;
}

//function definition
float calculateBill(int units) 
{
    float bill;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}