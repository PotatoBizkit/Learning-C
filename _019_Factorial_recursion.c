#include <stdio.h>

int Factorial(int x){
    if(x==0||x==1){
        return 1;
    }
    else{
        return x*Factorial(x-1);
    }
}

int main(){
    int num, fact;
    printf("Enter the number you want factorial of:\n");
    scanf("%d", &num);
    fact = Factorial(num);
    printf("The factorial of %d is %d.\n", num, fact);
    return 0;
}