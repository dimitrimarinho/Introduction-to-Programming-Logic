#include<stdio.h>
int main(void){

	int N, soma = 0, med;
	scanf("%d", &N);
	int vet[N];
	for (int i = 0; i < N; i++){
		scanf("%d", &vet[i]);
		soma += vet[i];
	}
	// printf("%d", soma);
	med = soma/2;
	soma = 0;
	for (int i = 0; i < N; i++){
		soma+= vet[i];
		if (soma == med){
			printf("%d\n", i+1);
		}
	}
	return 0;
}
