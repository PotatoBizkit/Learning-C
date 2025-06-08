#include <stdio.h>
#include <math.h>

int main(){
    int a, b=1;
    printf("Enter a no. to check whether it's prime:\n");
    scanf("%d", &a);
    if (a <= 1) {
        printf("%d is NOT prime", a);
        return 0;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a%i==0)
           b=0;
    }
    if (b)
    {
        printf("%d is prime", a);
    }
    else printf("%d is NOT prime", a);
    
    return 0;
}