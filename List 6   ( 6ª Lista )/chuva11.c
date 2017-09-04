#include<stdio.h>
int main (void){

	int N, xi;
	scanf("%d", &N);
	int chuva[N][N];
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%d", &chuva[i][j]);
		}
	} 
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			scanf("%d", &xi);
			chuva[i][j]+=xi;
			printf("%d ", chuva[i][j]);
		}
		printf("\n");
	}
	return 0;
}