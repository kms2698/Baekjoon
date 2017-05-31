#include <stdio.h>
int main() {
    int n,m,j,i,k,p,q,s,r,t;
    int count = 0;
    scanf ("%d %d",&n,&m);
    int arr[301][301] = {0};
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf ("%d",&arr[i][j]);
        }
    }
    scanf ("%d",&k);
    for (i=0;i<k;i++) {
        scanf ("%d %d %d %d",&p,&q,&s,&r);
        for (j=p;j<=s;j++) {
            for (t=q;t<=r;t++) {
                count += arr[j-1][t-1];
            }
        }
        printf ("%d\n",count);
        count = 0;
    }

    return 0;
}
