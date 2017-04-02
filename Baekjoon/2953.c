#include <stdio.h>

int main(){
    int i,j,a;
    int c[5]={0};//{0,0,0,0,0}
    for(i = 0; i < 5; i++){
        for(j = 0; j < 4; j++){
            scanf("%d",&a);
            c[i] += a;
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d\n",c[i]);
    }
    return 0;
}
