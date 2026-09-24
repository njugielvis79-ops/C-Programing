  /*
Name: Elvis Njugi
Registration Number: CT100/C/30630/26
Description: Program to calculate Simple Interest 
Date: 21st September 2026
Version: 1
  */
  
  
#include <stdio.h>

int main()
 {
    //declaring Variables 
    float principal;//%f
    float time;//%f
    float rate;//%f
    float simple_Interest;
    

    printf("Enter principal amount: \t");
    scanf("%f", &principal);

    printf("Enter time:  \t ");
    scanf("%f", &time);

    printf("Enter rate:  \t ");
    scanf("%f", &rate);

    simple_Interest = (principal * time * rate) / 100;

    printf("Simple Interest = %.2f\n", simple_Interest);

    return 0;
}
  