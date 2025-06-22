// Program to create a 2D Vector using structures

#include <stdio.h>

typedef struct vector_2d
{
    int i;
    int j;
}v2d;


int main(){
    v2d v = {1, 2};
    printf("The value of vector v is %di + %dj", v.i, v.j);
    return 0;
}