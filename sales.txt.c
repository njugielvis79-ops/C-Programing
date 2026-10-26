
#include <stdio.h>

int main() {
    FILE *fp;
    float amount, total = 0;

    fp = fopen("sales.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "500\n250\n1000\n150\n");
    fclose(fp);

    fp = fopen("sales.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fp);

    printf("Total sales for the day: %.2f\n", total);

    return 0;
}
    