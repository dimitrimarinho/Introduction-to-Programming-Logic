#include<stdio.h>
int main(void){

	int M, N, soma = 0;
	scanf("%d%d", &M, &N);
	char mapa[M+2][N+2];
	for (int i = 1; i < M+1; i++){
		for (int j = 1; j < N+1; j++){
			scanf(" %c", &mapa[i][j]);
		}
	}
	for (int j = 0; j < N + 2; j++){
		mapa[0][j] = '.';
		mapa[M+1][j] = '.';
	}
	for (int i = 0; i < M + 2; i++){
		mapa[i][0] = '.';
		mapa[i][N+1] = '.';
	}

	for (int i = 1; i < M+1; i++){
		for (int j = 1; j < N+1; j++){
			if (mapa[i][j] == '#' && mapa[i+1][j] == '.'){
				soma+=1;
				// printf("\n %d,%d\n", i,j);
			}
			else if (mapa[i][j] == '#' && mapa[i][j+1] == '.'){
				soma+=1;
				// printf("\n %d,%d\n", i,j);
			}
			else if (mapa[i][j] == '#' && mapa[i-1][j] == '.'){
				soma+=1;
				// printf("\n %d,%d\n", i,j);
			}
			else if (mapa[i][j] == '#' && mapa[i][j-1] == '.'){
				soma+=1;
				// printf("\n %d,%d\n", i,j);
			}
		}
	}

	/* for (int i = 0; i < M+2; i++){
		for (int j = 0; j < N+2; j++){
			printf(" %c", &mapa[i][j]);
		}
	}*/

	printf("%d\n", soma);
}