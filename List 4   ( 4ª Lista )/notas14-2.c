// Link of the problem (language PT-BR): http://br.spoj.com/problems/NOTAS14/
// (Name of the problem) NOTAS14 - Notas

#include<stdio.h>
int main(void){

	int N, a, m = 0;
	scanf("%d", &N);
	int vet[101] = {};
	for (int i = 0 ; i < N; i++){
		scanf("%d", &a);
		vet[a]+=1;
		if (vet[a] >= m){
			m = vet[a];
		}
	}
	for (int i = 101; i > 0; i--){
		if (vet[i] == m){
			printf("%d\n", i);
			break;
		}
	}
	return 0;

}
