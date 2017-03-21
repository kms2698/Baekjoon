#include <stdio.h>

int main(){
    int a,b;
    int i = 1;
    while (i == 1) {
        scanf("%d %d",&a,&b);
        if (a == 0 && b == 0){
            i = 0;
        }
        else if (a > b) {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
