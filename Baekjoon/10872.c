#include <stdio.h>

int factorial(int n);

int main(){
    int n;
    int fac = 1;

    scanf("%d",&n);

    printf("%d",factorial(n));
    return 0;
}

int factorial(int n){
    int i;
    int fac = 1;
    for(i = 1; i <= n; i++) {
        fac *= i;
    }
    return (fac);
}
