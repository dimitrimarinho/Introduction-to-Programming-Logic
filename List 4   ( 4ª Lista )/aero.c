// Link of the problem (language PT-BR): http://br.spoj.com/problems/AERO/
// (Name of the problem) AERO - Aeroporto

#include<stdio.h>
int main(void){

	int A, V, X, Y, test = 0;
	scanf("%d%d", &A, &V);

	while(A != 0 && V != 0){

		int fluxo[101], m = 0;

		for (int i = 0; i < 101; i++){
				fluxo[i] = 0;
		}

		for (int i = 0; i < V; i++){

			scanf("%d%d", &X, &Y);
			fluxo[X] += 1;
			fluxo[Y] += 1;
		}
		for (int i = 1; i <= A; i++){

			if (fluxo[i] >= m){
	  			m = fluxo[i];
	  		}
	  	}

		printf("\nTeste %d\n", ++test);

		for (int i = 1; i <= A; i++){

			if (fluxo[i] == m){
				printf("%d ", i);
			}
		}
		printf("\n");

		scanf("%d%d", &A, &V);
	}
}
