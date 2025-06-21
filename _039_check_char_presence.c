#include <stdio.h>
#include <string.h>

void search_char(char* str, char to_search){
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]==to_search)
        {
            printf("Character %c exists in string \"%s\".", to_search, str);
            return;
        }
    }
    printf("Character %c does not exist in string \"%s\".", to_search, str);
}

int main(){
    char st[50];
    char check;
    printf("Enter the string:\n");
    fgets(st, sizeof(st), stdin);
    st[strcspn(st, "\n")] = 0;
    printf("Enter the character you want to search:\n");
    scanf("%c", &check);
    search_char(st, check);
    return 0;
}