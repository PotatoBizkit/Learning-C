// Create an array of size 10 and store multiplication table in it

#include <stdio.h>

void Multiplication_Operation(int * product, int x){
    for (int i = 0; i < 10; i++)
    {
        *product = x*(i+1);
        printf("The value %d is stored at memory location %u\n", x*(i+1), product);
        product++;
    }
}

int main(){
    int num, mul[10];
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);
    Multiplication_Operation(mul, num);
    printf("The multiplication table of %d is:\n", num);
    for (int k = 0; k < 10; k++)
    {
        printf("%d x %d = %d\n", num, k+1, mul[k]);
    }
    return 0;
}