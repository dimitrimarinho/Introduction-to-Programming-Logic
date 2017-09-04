#include<stdio.h>
int main (void){

	int N, K, verify = 0;
	scanf("%d%d", &N, &K);
	int vet[N], query, answ[K];
	for (int i = 0; i < N ; i++){
		scanf("%d", &vet[i]);
	}
	for (int k = 0; k < K; k++){
		scanf("%d", &query);
		int li = 0, ls = N-1;
		verify = 0;
		while (li <= ls){
			int m = (li+ls)/2;
			if (query == vet[m]){
				if (vet[m] == vet[m-1]){
					ls = m - 1;
				}
				else if (vet[m] != vet[m-1]){
					answ[k] = m;
					verify = 1;
					break;
				}
			}
			else if (query > vet[m]){
				li = m + 1;
			}
			else if (query < vet[m]){
				ls = m - 1;
			}
		}
		if (verify == 0){
			answ[k] = -1;
		}
	}
	for (int w = 0; w < K; w++){
		printf("%d\n", answ[w]);
	}
}

// https://moj.naquadah.com.br/contests/mata37-ufba-20171-l8/BuscaBinaria.pdf
