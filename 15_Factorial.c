#include <stdio.h>

int main(){
    int a, b=1;
    printf("Enter the no. you want factorial of:\n");
    scanf("%d",&a);
    if (a==0||a==1)
    {
        printf("The factorial is 1\n");
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            b*=i;
        }
        printf("Factorial is %d", b);
    }
    return 0;
}