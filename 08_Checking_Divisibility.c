// Program to test divisibility of no. given by user
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter a no. whose divisibility you want to test against:\n");
    scanf("%d", &a);
    printf("Enter a no. whose divisibility you want to test:\n");
    scanf("%d", &b);
    if (a % b == 0)
    {
        printf("%d is divisible by %d", a, b);
    }
    else
        printf("%d is not divisible by %d", a, b);

    return 0;
}