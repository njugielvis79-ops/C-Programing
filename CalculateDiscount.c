#include <stdio.h>

//function prototype
float calculateDiscount(float purchase_amnt);

int main() 
{

    float amount, discount, final_amount;

    printf("Enter the purchase amount: \t");
    scanf("%f", &amount);

    //function call
    discount = calculateDiscount(amount);
    final_amount = amount - discount;

    printf("\n");
    printf("SUPERMARKET DISCOUNT PROGRAM \n");
    printf("============================ \n");
    printf("Purchase Amount: Ksh %.2f \n", amount);
    printf("Discount Amount: Ksh %.2f \n", discount);
    printf("Final Amount Payable: Ksh %.2f \n", final_amount);
    printf("============================ \n");

    return 0;
}

//function definition
float calculateDiscount(float purchase_amnt) {
    float discount;

    if (purchase_amnt < 5000) {
        discount = 0.05 * purchase_amnt;
    }
    else if (purchase_amnt < 10000) {
        discount = 0.10 * purchase_amnt;
    }
    else {
        discount = 0.15 * purchase_amnt;
    }

    return discount;
}