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
    printf("%d\n",c[0]);
    printf("%d\n",c[1]);
    printf("%d\n",c[2]);
    printf("%d\n",c[3]);
    printf("%d\n",c[4]);
    return 0;
}
