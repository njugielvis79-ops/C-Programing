     /*
Name: Elvis Njugi
Registration Number: CT100/C/30630/26
Description: Program for displaying User Input 
Date: 10th September 2026
Version: 1
    */
    
#include <stdio.h>

int main()
 {
    //declare and initiatilize Variables 
    float height;  //%f
    double bank_balance;  //%lf
    char phone_number[20];  //%s

    // Get user input
    printf("Enter your height (cm): \t ");
    scanf("%f", &height);

    printf("Enter your bank balance (KES):  \t ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: \t ");
    scanf("%s", phone_number);

    // Display user input
    printf("\n---Your information---\n ");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: KES %.2lf\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}

