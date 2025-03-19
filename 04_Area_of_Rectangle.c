//Area of rectangle using user inputs
#include <stdio.h>

int main(){
    int len, wid;
    printf("Welcome to the program to calculate area of the rectangle!\n");
    printf("Please enter length of the rectangle:\n");
    scanf("%d", &len);
    printf("Now please enter width of the rectangle:\n");
    scanf("%d", &wid);
    printf("The area of the Rectangle with length %d and width %d is %d units^2.", len, wid, len*wid);
    return 0;
}