#include<stdio.h>
int main(void){

	int N, K, Xi, env;
	scanf("%d%d", &N, &K);
	int vet[K+1];
	for (int i = 0; i <= K; i++){
		vet[i] = 0;
	}
	for (int i = 0; i < N; i++){
		scanf("%d", &Xi);
		vet[Xi] += 1;
	}
	env = vet[1];
	for (int i = 1; i <= K; i++){
		if (vet[i] < env){
			env = vet[i];
			
		}
		// printf("%d\n", env);
	}
	printf("%d\n", env);

}
