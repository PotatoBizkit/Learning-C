#include <stdio.h>
#include <string.h>

void encrypt(char* str){
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        str[i]+=1;
    }
    
}

int main(){
    char st[50];
    printf("Enter string:\n");
    fgets(st, sizeof(st), stdin);
    st[strcspn(st, "\n")] = 0;
    encrypt(st);
    printf("%s", st);
    return 0;
}