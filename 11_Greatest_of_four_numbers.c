#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("Enter the four numbers to compare:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    if (a == b && b == c && c == d)
    {
        printf("All the entered numbers are equal in value\n");
    }
    else
    {
        if (a >= b && a >= c && a >= d)
        {
            printf("%.2f is greater\n", a);
        }
        else if (b >= c && b >= d)
        {
            printf("%.2f is greater\n", b);
        }
        else if (c >= d)
        {
            printf("%.2f is greater\n", c);
        }
        else
        {
            printf("%.2f is greater\n", d);
        }
    }
    return 0;
}
