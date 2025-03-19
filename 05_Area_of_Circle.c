//Area of circle using user inputs
#include <stdio.h>

const float pi=3.14;

int main(){
    float rad;
    printf("Welcome to the program to calculate area of the circle!\n");
    printf("Please enter radius of the circle:\n");
    scanf("%f", &rad);
    printf("The area of the Circle with radius %.2f is %.2f units^2.", rad, pi*rad*rad);
    return 0;
}