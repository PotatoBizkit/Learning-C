#include <stdio.h>
#include <string.h>

int count_char(char* str, char to_count){
    int count=0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]==to_count)
        {
            count++;
        }
    }
    return count;
}

int main(){
    char st[50];
    char look;
    int total_count;
    printf("Enter string:\n");
    fgets(st, sizeof(st), stdin);
    st[strcspn(st, "\n")] = 0;
    printf("Enter the character you want to count occurrence of:\n");
    scanf("%c", &look);
    total_count=count_char(st, look);
    printf("%c occurred in \"%s\" %d number of times.", look, st, total_count);
    return 0;
}