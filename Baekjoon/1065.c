#include <stdio.h>

int hanwoo(int n){
    int ms[5]={0};
    int index = 0;
    for(int i=0; n>0; i++){
        ms[i] = n%10;
        n /= 10;
        index = i;
    }
    int diff = ms[0] - ms[1];
    for(int i=0; i<index; i++){
        if(ms[i] - ms[i+1] != diff){
            return 0;
        }
    }
    return 1;
}
int main(){
    int N, count=0;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        if(hanwoo(i) == 1) count++;
    }
    printf("%d\n", count);
}
