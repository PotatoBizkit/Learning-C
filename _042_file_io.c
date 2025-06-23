#include <stdio.h>

int main(){
    char f[50]="abc.txt";
    FILE* ptr;
    ptr = fopen(f, "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d", num);
    // fscanf(ptr, "%d", &num);
    // printf("%d", num); // again prints 69
    fclose(ptr);
    return 0;
}