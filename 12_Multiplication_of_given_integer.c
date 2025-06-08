#include <stdio.h>

int main(){
    int a, i=1;
    printf("Enter the no. you want multiplication table of:\n");
    scanf("%d", &a);
    while (i<=10)
    {
        printf("%dx%d=%d\n", a,i,a*i);
        i++;
    }
    
    return 0;
}