#include <stdio.h>

int main(){
    int a,i;
    int n = 1;
    int m = 0;//minimum
    int t = 0;//total
    for (i = 0; i < 7; i++) {
        scanf("%d",&a);
        if (a % 2 != 0) {
            t += a;
            if (n == 1) {
                m = a;
                n = 0;
            }
            else if(m > a) {
                m = a;
            }
        }
    }
    if (n == 1) {
        printf("-1");
    }
    else{
        printf("%d\n%d",t,m);
    }
    return 0;
}
