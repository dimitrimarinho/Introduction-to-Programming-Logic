// Link of the problem (language PT-BR): http://br.spoj.com/problems/MINHOCA/
// (Name of the problem) MINHOCA - Campo de Minhocas

#include<stdio.h>
int main(void){

	int N, M;
	scanf("%d%d", &N, &M);
	int minhoca[N][M], soma = 0, maiorsoma = 0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			scanf("%d", &minhoca[i][j]);
			soma += minhoca[i][j];
		}
			if (soma > maiorsoma){
				maiorsoma = soma;
			}
			soma = 0;
	}
	for (int j = 0; j < M; j++){
		soma = 0;
		for (int i = 0; i < N; i++){
			scanf("%d", &minhoca[i][j]);
			soma += minhoca[i][j];
		}
		if (soma > maiorsoma){
			maiorsoma = soma;
		}
		soma = 0;
	}

	printf("%d\n", maiorsoma);
	return 0;
}
