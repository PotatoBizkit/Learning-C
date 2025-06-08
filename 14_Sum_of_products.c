#include <stdio.h>

int main(){
    int a, b=0;
    printf("Enter the no. whose sum of first 10 products you want:\n");
    scanf("%d", &a);
    for (int i = 0; i <=10; i++)
    {
        b+=a*i;
    }
    printf("The sum of first 10 products of %d is %d", a, b);
    return 0;
}