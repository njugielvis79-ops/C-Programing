#include <stdio.h>

int main() 
{
    float attendance, avgMarks;

    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    if (attendance >= 75 && avgMarks >= 40)
        printf("Eligible\n");
    else
        printf("Not eligible.\n");

    return 0;
}