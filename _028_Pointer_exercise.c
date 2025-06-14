// Program to store 10x the value at given variable

#include <stdio.h>

void Ten_Times(int* x){
    *x = *x * 10;
    printf("The value at variable i at memory location %p after passing to function is %d\n", x, *x);

}

int main(){
    int i;
    int* j = &i;
    printf("Enter the integer value for variable i:\n");
    scanf("%d", &i);
    printf("The value you entered for variable i at memory location %p is %d\n", j, *j);
    Ten_Times(&i);
    return 0;
}