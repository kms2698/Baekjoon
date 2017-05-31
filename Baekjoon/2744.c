#include <stdio.h>
#include <string.h>

int main(){
    char ch[10000];
    int i;

    scanf("%s",ch);//문자열 입력

    for (i = 0; i < strlen(ch); i++) { //sizeof 는 문자열의 길이
        if(ch[i] >= 'A' && ch[i] <= 'Z'){
            ch[i] += 32;
        }
        else if(ch[i] >= 'a' && ch[i] <= 'z'){
            ch[i] -= 32;
        }
    }
    printf("%s",ch);
    return 0;
}
