#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    printf("Enter an alphabet:\n");
    scanf("%c", &c);
    if (c==tolower(c))
    {
        printf("Entered alphabet is in lower case\n");
    }
    else printf("Entered alphabet is NOT in lower case\n");
    
    return 0;
}