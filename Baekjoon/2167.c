#include <stdio.h>

int main() {
    int arr[300][300] = {{0}};
    int n,m;
    int x,y,i,j;
    int e,a,b,c,k;
    int total = 0;
    scanf("%d %d",&n,&m);
    for(a = 0; a < n; a++){
        for (b = 0; b < m; b++) {
            scanf("%d", &e);
            arr[a][b] = e;
        }
    }
    scanf("%d",&k);
    for (c = 0; c < k; c++) {
        scanf("%d %d %d %d",&i,&j,&x,&y);
        for(a = i; a <= x; a++){
            for(b = j; b <= y; b++){
                total += arr[a][b];
            }
        }
        printf("%d\n",total);
        total = 0;
    }
    return 0;
}
