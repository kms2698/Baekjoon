#include "stdio.h"
#include "string.h"

int main() {
    char ch[10000];
    scanf("%s",ch);
    int i;
    int flag = 1;
    int o = strlen(ch)-1;
    int f = strlen(ch)/2;

    for(i=0; i < f; i++){
        if(ch[i] != ch[o - i]){
            flag = 0;
            break;
        }
    }
    printf("%d\n",flag);
    return 0;
}
