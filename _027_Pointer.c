#include <stdio.h>

int main(){
    int i = 69;
    int* y = &i;
    printf("The address of i in hex is %p\n", &i);
    printf("The address of i in unsigned int is %u\n", &i);
    printf("The value at address i is %d\n", *y);
    printf("The value at address i is %d\n", *&i);
    printf("The size of pointer variable y is %d bytes\n", sizeof(y));
    return 0;
}