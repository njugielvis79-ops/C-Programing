#include <stdio.h>

double convertToCelsius(double f) 
{
    return (f - 32) * 5.0 / 9.0;
}

int main() 
{
    double f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &f);
    printf("%.1f F = %0.f C\n", f, convertToCelsius(f));
    
    return 0;
}