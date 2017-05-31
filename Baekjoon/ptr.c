#include <stdio.h>

int plus(int *ptr){
    *ptr += 1;
    return *ptr;
}

int main(int argc, char const *argv[]) {
    int a=0,b=0,c=0;
    int *ptr;

    ptr = &a;
    *ptr = 10;
    printf("%d %d %d %d\n",a,b,c,*ptr);

    ptr = &b;
    *ptr = 20;
    printf("%d %d %d %d\n",a,b,c,*ptr);

    ptr = &c;
    *ptr = 30;
    printf("%d %d %d %d\n",a,b,c,*ptr);

    int num=1;
    int result;
    result = plus(&num);
    printf("%d %d\n",num,result);

    return 0;
}
