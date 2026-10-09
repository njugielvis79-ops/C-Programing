#include <stdio.h>

int main() 
{
    int secret = 13;   // Any number from 1 to 20
    int guess = 0, attempts = 0;

    while (guess != secret) {
        printf("Guess (1-20): ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret)
            printf("Too high!\n");
        else if (guess < secret)
            printf("Too low!\n");
        else
            printf("Congratulations!\n");
    }
    printf("Attempts: %d\n", attempts);
    return 0;
}