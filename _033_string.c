#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter your name:\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Your name is: %s\n", name);
    return 0;
}