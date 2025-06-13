// To print pattern:
//    *
//   **
//  ***
// ****
// ...

#include <stdio.h>

void Right_Aligned_Triangle(int x, char c){
    for (int i = 1; i <= x; i++)
    {
        for (int j = x; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
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
    Right_Aligned_Triangle(rows, sym);
    return 0;
}