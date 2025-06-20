#include <stdio.h>
#include <string.h>

void copy_string(char* str1, char* str2){
    int i = 0;
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
} 

int main(){
    char st1[50];
    char st2[50];
    printf("Enter string:\n");
    fgets(st1, sizeof(st1), stdin);
    st1[strcspn(st1, "\n")] = 0;
    copy_string(st1, st2);
    printf("Copied string is: %s", st2);
    return 0;
}