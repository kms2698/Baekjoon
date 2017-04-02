#include <stdio.h>

int main(){
    int i,n,m,a;
    int c[1000] = {0};
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        scanf("%d",&a);
        c[i] = a;
    }
    for (i = 0; i < n; i++) {
        if (i == n - 1) {
            break;
        }
        else{
            for(i = i + 1; i < n; i++) {
                if (c[i] > c[i+1]) {
                    m = c[i+1];
                    c[i] = c[i+1];
                    c[i+1] = m;
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d\n",c[i]);
    }
    return 0;
}
