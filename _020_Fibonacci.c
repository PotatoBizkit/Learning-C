#include <stdio.h>

int Fib(int x){
    if (x == 1 || x == 2)
    {
        return 1;
    }
    
    return Fib(x-1) + Fib(x-2);
}

int main(){
    int num, fib;
    printf("Enter the element number of fibonacci sequence you want:\n");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Fibonacci cannot be performed for negative integers");
        return 1;
    }
    fib = Fib(num);
    printf("The element number %d of Fibonacci sequence is %d", num, fib);

    return 0;
}