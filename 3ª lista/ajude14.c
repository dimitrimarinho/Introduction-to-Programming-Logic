// Link of the problem (language PT-BR): http://br.spoj.com/problems/AJUDE14/
// (Name of the problem) AJUDE14 - Ajude Aparecido

#include<stdio.h>
int main(void){

	int N, n, soma = 0, T;
	scanf("%d", &N);
	
	for (int i = 0 ; i < N; i++){
	
		scanf("%d", &n);
		soma += n;
	}
	scanf("%d", &T);
	if (T == soma)
		printf("Acertou\n");
	else
		printf("Errou\n");
	return 0;
}
