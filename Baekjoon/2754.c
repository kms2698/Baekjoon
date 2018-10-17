#include "stdio.h"
#include "string.h"
int main() {
    /* code */
    char g[2];
    scanf("%s",g);
    if(!strcmp(g,"A+")){
        printf("4.3");
    }
    else if(!strcmp(g,"A0")){
        printf("4.0");
    }
    else if(!strcmp(g,"A-")){
        printf("3.7");
    }
    else if(!strcmp(g,"B+")){
        printf("3.3");
    }
    else if(!strcmp(g,"B0")){
        printf("3.0");
    }
    else if(!strcmp(g,"B-")){
        printf("2.7");
    }
    else if(!strcmp(g,"C+")){
        printf("2.3");
    }
    else if(!strcmp(g,"C0")){
        printf("2.0");
    }
    else if(!strcmp(g,"C-")){
        printf("1.7");
    }
    else if(!strcmp(g,"D+")){
        printf("1.3");
    }
    else if(!strcmp(g,"D0")){
        printf("1.0");
    }
    else if(!strcmp(g,"D-")){
        printf("0.7");
    }
    else{
        printf("0.0");
    }
}
