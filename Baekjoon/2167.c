#include <stdio.h>

int main(){

	int A,B;
    int list[301][301]={0};
    int N,a,b,c,d;
    int sum=0;
	scanf("%d %d",&A,&B);
	for(int i=0; i<A; i++){
		for(int j=0; j<B; j++){
			scanf("%d",&list[i][j]);
		}
	}
	scanf("%d",&N);
	for(int j=0; j<N; j++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(int x=a; x<=c; x++){
			for(int y=b; y<=d; y++){
				sum += list[x-1][y-1];
			}
		}
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;
}
