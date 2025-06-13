#include <stdio.h>
#include<math.h>

void area_of_square(int x){
    printf("The area of square with side %d is %.1lf", x, pow(x, 2));
}

int main(){
    int side_of_square;
    printf("Enter the side of square you want the area of:\n");
    scanf("%d", &side_of_square);
    area_of_square(side_of_square); // call by value

    return 0;
}