#include <stdio.h>

int zero = 0 , one = 0;
int fibonacci(int n) {
    if (n==0) {
        zero ++;
        return 0;
    } else if (n==1) {
        one ++;
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }

}

int main(){
    int test_case,n;
    scanf("%d",&test_case);
    for(int i =0 ; i < test_case ; i++){
        scanf("%d",&n);
        fibonacci(n);
        printf("%d %d\n", zero, one);
        zero = 0;
        one = 0;
    }
    return 0;
}
