#include <stdio.h>
#include <string.h>

void string_slice(char * c, int strt, int stp){
    char new_st[50];
    int index = 0;
    for (int i = strt; i <= stp; i++)
    {
        new_st[index] = c[i];
        index++;
    }
    new_st[index] = '\0';
    printf("Your original string: %s\n", c);
    printf("Your sliced string: %s", new_st);
}

int main(){
    int start, stop;
    char st[50];
    printf("Enter string:\n");
    fgets(st, sizeof(st), stdin);
    st[strcspn(st, "\n")] = 0;
    printf("Enter starting index:\n");
    scanf("%d", &start);
    printf("Enter stopping index:\n");
    scanf("%d", &stop);
    if (start>=0 && start<50 && stop>=0 && stop<50 && start<=stop)
    {
        string_slice(st, start, stop);
    }
    else {
        printf("Invalid indices. Make sure 0 <= start <= stop < %d\n", strlen(st));
    }
    return 0;
}