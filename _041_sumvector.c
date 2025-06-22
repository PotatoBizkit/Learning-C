// Program to write a function that returns sum of 2 vectors passed to it

#include <stdio.h>

typedef struct vector_2d
{
    int i;
    int j;
}v2d;

v2d sumvec(v2d i, v2d j){
    v2d k = {i.i + j.i, i.j + j.j};
    return k;
}

int main(){
    v2d v1 = {1, 2};
    v2d v2 = {3, 4};
    
    v2d v3 = sumvec(v1, v2);

    printf("The sum of vectors is %di + %dj", v3.i, v3.j);
    return 0;
}