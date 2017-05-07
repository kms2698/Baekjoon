#include <stdio.h>

int fibo(int n, int a1, int a2){
    if(n > 0){
        return fibo(n-1, a2, a1+a2);
    }
    else{
        return a1;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n,0,1));
}
