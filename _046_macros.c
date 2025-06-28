#include <stdio.h>

#define PI 3.14
#define sqre(x) ((x)*(x))
#define boo

int main(){
    int i = 4;
    printf("File: %s\n", __FILE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
    printf("Line: %d\n", __LINE__);
    printf("Radius: %d\n", i);
    printf("Area: %.2f\n", PI*sqre(i));
    #ifdef boo
    printf("Lmao got scared\n");
    #endif
    #undef boo
    #ifndef boo
    printf("Me no scared\n");
    #endif
    return 0;
}