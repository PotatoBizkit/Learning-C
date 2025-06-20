#include <stdio.h>
#include <string.h>

void string_length(char * str){
    int length = 0;
    while(*str != '\0'){
        length += 1;
        str++;
    }
    printf("Length of the string is %d", length);
}

int main(){
    char name[] = {"Chainsaw man"};
    printf("%d\n", strlen(name));
    string_length(name);
    return 0;
}