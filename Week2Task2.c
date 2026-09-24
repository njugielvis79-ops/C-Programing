    /*
Name: Elvis Njugi
Registration Number: CT100/C/30630/26
Description: Program for  displaying Bank loans
Date: 21st September 2026
Version: 1
    */

#include <stdio.h>

int main() 
{
    // declare Variables 
    int age;//%d
    float income;//%f

    printf("Enter your age: \t");
    scanf("%d", &age);

    printf("Enter your annual income: \t");
    scanf("%f", &income);

    if (age >= 21 & income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}