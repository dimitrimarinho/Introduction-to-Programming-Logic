// Link of the problem (language PT-BR): http://br.spoj.com/problems/PUSAPO11/
// (Name of the problem) PUSAPO11 - Pulo do sapo

#include<stdio.h>
int main(void){

	int N, M, P, D; // N e M representando o número de pedras no rio e o número de sapos, respectivamente
			// Cada uma das M linhas seguintes possui dois inteiros P e D representando a posição inicial de um sapo e a distância fixa de pulo, respectivamente.
	scanf("%d%d", &N, &M);
	int vet[N];
	for (int i = 0; i < N ; i++){
		vet[i] = 0;
	}
	for (int i = 0; i < M ; i++){

		scanf("%d%d", &P, &D);
		vet[P-1]= 1;
		for (int j = 1; j <= N; j++){
			if ((P-1) + D * j >= 0 && (P-1) + D * j < N){
				vet[(P-1) + D * j] = 1;
				// printf("J POSITIVO , j é %d %d\n", j, vet[(P-1) + D * i] );
			}
			if ((P-1) - D * j >= 0 && (P-1) - D * j < N){
				vet[(P-1) - D * j] = 1;
				// printf("J NEGATIVO , j é %d %d\n", j , vet[(P-1) - D * i] );
			}
		}
	}
	for (int i = 0; i < N; i++){
		printf("%d\n", vet[i]);
	}
}
