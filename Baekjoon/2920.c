#include <stdio.h>

int main(){
    int i,n;
    int a = 0;
    int t[8] = {0};
    for(i = 0; i < 8; i++){
        scanf("%d",&n);
        t[i] = n;
    }
    for(i = 0; i < 7; i++){
        if (t[i] < t[i+1]) {
            a += 1;
        }
        else if(t[i] > t[i+1]){
            a -= 1;
        }
    }
    if (a == 7) {
        printf("ascending");
    }
    else if (a == -7) {
        printf("descending");
    }
    else{
        printf("mixed");
    }
    return 0;
}
