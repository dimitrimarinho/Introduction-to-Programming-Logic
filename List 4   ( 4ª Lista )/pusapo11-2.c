// Link of the problem (language PT-BR): http://br.spoj.com/problems/PUSAPO11/
// (Name of the problem) PUSAPO11 - Pulo do sapo

#include<stdio.h>
int main(void){

	int N, M, P, D;
	scanf("%d%d", &N, &M);
	int rio[N];
	for (int i = 0 ; i < N; i++){
		rio[i] = 0;
	}
	for (int i=0; i < M; i++){
		scanf("%d%d", &P, &D);
		rio[P-1]=1;
		for (int j = 1; j <= (int)((N/D)+1); j++){
			if ((P-1)-(j*D) >= 0){
				rio[(P-1)-(j*D)]=1;
			}
			if ((P-1)+(j*D) <= N){

				rio[(P-1)+(j*D)]=1;
			}
		}
	}
	for (int i=0; i < N; i++){
		printf("%d\n", rio[i]);
	}
	return 0;

}
