// Link of the problem (language PT-BR): http://br.spoj.com/problems/COFRE/
// (Name of the problem) COFRE - Cofrinhos da Vó Vitória

#include<stdio.h>
int main(void){

	int N, J, Z, dif = 0, test = 1;
	scanf("%d", &N);
	while (N != 0){

		printf("Teste %d\n", test++);
		for (int i = 0; i < N; i++){
			scanf("%d%d", &J, &Z);
			dif += J - Z;
			printf("%d\n", dif);
		}
		dif = 0;
		scanf("%d", &N);
	}
}
