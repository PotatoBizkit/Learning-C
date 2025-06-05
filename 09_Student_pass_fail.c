#include <stdio.h>

int main()
{
    int a, b, c, d;
    float e;
    printf("Enter the marks of 4 subjects:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    e = ((a + b + c + d) * 100 / 400);

    if (a < 0 || b < 0 || c < 0 || d < 0 || a > 100 || b > 100 || c > 100 || d > 100)
    {
        printf("You did not enter valid marks bukaroo...");
    }
    else if (a > 33 && b > 33 && c > 33 && d > 33 && e > 40)
    {
        printf("You passed");
    }
    else
        printf("You failed");

    return 0;
}