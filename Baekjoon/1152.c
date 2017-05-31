#include <stdio.h>
#include <string.h>

int main(){
    char ch[1000001];
    int c = 0;
    int i;
    int isWord = 0;
    scanf("%[^\n]",ch);
    for(i = 0; i<strlen(ch); i++){
        if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')){
            isWord = 1;
            if(isWord == 1 && i == strlen(ch)-1){
                c += 1;
            }
        }
        else if(isWord == 1 && ch[i] == ' '){
            c += 1;
            isWord = 0;
        }
    }
    printf("%d",c);
    return 0;
}
