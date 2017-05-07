#include <stdio.h>

int makeN(int N, int origin, int count){
    if(N == origin && count != 0){
        return count;
    }
    else{
        return makeN((N%10)*10 + ((N%10)+(N/10))%10, origin, count+1);
    }
}

int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", makeN(N, N, 0));
}
