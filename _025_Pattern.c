// To print pattern:
//    *
//   ***
//  *****
// *******
// ...

#include <stdio.h>

void Triangle(int x, char c){
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= (2*i - 1); k++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main(){
    int rows;
    char sym;
    printf("Enter the number of rows you want:\n");
    scanf("%d", &rows);
    while (getchar() != '\n');
    printf("Enter the character symbol:\n");
    scanf("%c", &sym);
    while (getchar() != '\n');
    printf("\n");
    Triangle(rows, sym);
    return 0;
}