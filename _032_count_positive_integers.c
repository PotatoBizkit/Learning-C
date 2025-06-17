// Program to count number of positive integers in array

#include <stdio.h>

int main(){
    int arr[10], count = 0;
    printf("Enter 10 integers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]>0)
        {
            count++;
        }
    }
    printf("The number of positive integers in array are:\n%d", count);
    return 0;
}