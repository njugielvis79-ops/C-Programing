#include <stdio.h>

double calculateFare(double distance)
 {
    return distance * 50;
}

int main() {
    double km;
    printf("Enter distance (km): ");
    scanf("%lf", &km);
    printf("Total fare: KSh. %.2f\n", calculateFare(km));
    
    return 0;
}