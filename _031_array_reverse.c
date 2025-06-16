// Program to reverse array

#include <stdio.h>

void rev_arr(char* arr_ptr, int l){
    char temp;
    for (int i = 0; i < l/2; i++)
    {
        temp = arr_ptr[i];
        arr_ptr[i] = arr_ptr[l-1-i];
        arr_ptr[l-1-i] = temp;
    }
}

int main(){
    char my_name[] = {'c', 'h', 'e', 't', 'a', 'n'};
    int len = sizeof(my_name)/ sizeof(my_name[0]);
    rev_arr(my_name, len);
    for (int i = 0; i < len; i++)
    {
        printf("%c", my_name[i]);
    }
    
    return 0;
}