// Link of the problem (language PT-BR): http://br.spoj.com/problems/NOTAS14/
// (Name of the problem) NOTAS14 - Notas

#include<stdio.h>
int main(void){

	int N, a, A[101] = {}, m = 0, M = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &a);
		A[a] += 1;
	}
	for (int i = 0; i <= 100; i++){
		if (A[i] >= m){
			m = A[i];
			M = i;
		}
	}
	printf("%d\n", M);

}
