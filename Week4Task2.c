#include <stdio.h>

int main() 
{
    double balance, amount;
    printf("Enter starting balance: ");
    scanf("%lf", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%lf", &amount);
        balance -= amount;
        printf("Balance: %.2f\n", balance);
    }
    return 0;
}