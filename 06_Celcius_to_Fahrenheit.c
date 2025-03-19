//Converting celcius value to farenheit
#include <stdio.h>

int main(){
    float c,f;
    printf("This is a program to convert temperature from celcius to fahrenheit!\n");
    printf("Please enter temperature in celcius:\n");
    scanf("%f", &c);
    f = (9*c/5) + 32;
    printf("The temperature in fahrenheit is %.2fF.", f);
    return 0;
}