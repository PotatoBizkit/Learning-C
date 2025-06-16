// Create an array of 10 numbers. Verify ptr+2 points to 3rd element 
// where ptr points to first element

#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int* ptr = arr;
    printf("%d", *(ptr+2));
    return 0;
}

// Shit works... yay...