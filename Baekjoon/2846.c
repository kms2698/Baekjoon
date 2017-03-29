#include <stdio.h>

int main(){
    int i,n;
    int t = 0;//maximum
    int h = 0;//height
    int c[1000] = {0};
    scanf("%d",&n);
    for(i = 0; i < n; i++){//배열숫자입력
        scanf("%d",&c[i]);
    }
    for(i = 0; i < n; i++){
        if(i == n - 1){//맨 마지막
            if(h > t){
                t = h;
            }
        }
        else{
            if(c[i] < c[i+1]){
                h += c[i+1] - c[i];
            }
            if(c[i] >= c[i+1]){
                if (h > t) {
                    t = h;
                    h = 0;
                }
                else{
                    h = 0;
                }
            }
        }
    }
    printf("%d",t);
    return 0;
}
