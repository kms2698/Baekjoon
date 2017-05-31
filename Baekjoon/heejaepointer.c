#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int *p;
    p = &a;
    b = *p;
    printf("%p\n", p);
    printf("%d\n", b);
}
