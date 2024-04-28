#include <stdio.h>

int main(){
    int x = 17, y;
    int *p;
    p = &x;
    y = *p + 3;
    printf("EL valor de y es %d", y);
    return 0;
}