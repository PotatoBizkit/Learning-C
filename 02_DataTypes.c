#include <stdio.h>

/*
To see how much memory the following datatypes consume
*/

int main(){
    printf("Size of int datatype is %d bytes\n", sizeof(int));
    printf("Size of char datatype is %d bytes\n", sizeof(char));
    printf("Size of float datatype is %d bytes\n", sizeof(float));
    printf("Size of double datatype is %d bytes\n", sizeof(double));
    printf("Size of long datatype is %d bytes", sizeof(long));
    return 0; // value returned to OS
}