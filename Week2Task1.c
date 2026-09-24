     /*
Name: Elvis Njugi
Registration Number: CT100/C/30630/26
Description: Program for finding Volume and Surface Area of a cylinder 
Date: 10th September 2026
Version: 1
     */
#include <stdio.h>

int main()
{
    // declare variables
    float radius; //%f
    float height;//%f
    float pi;//%f
    float volume;
    float surface_area;

    printf("Enter the radius: \t");
    scanf("%f", &radius);

    printf("Enter the height: \t");
    scanf("%f", &height);

    printf("Enter the pi: \t");
    scanf("%f", &pi);

    volume=pi*radius*radius*height;
    surface_area=2*pi*radius*radius+2*pi*radius*height;

    printf("Volume = %.3f\n", volume);
    printf("Surface Area = %.3f\n", surface_area);

    return 0;
}