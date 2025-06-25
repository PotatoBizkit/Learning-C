#include <stdio.h>

typedef union marks
{
    int id;
    float marks;
    char grade;
}mk;


int main(){
    mk i;
    i.id = 10; // Overwritten
    i.grade = 'c';
    printf("%d\n", i.id); 
    printf("%c", i.grade); 
    return 0;
}