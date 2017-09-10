// Link of the problem (language PT-BR): http://br.spoj.com/problems/FATORIA2/
// (Name of the problem) FATORIA2 - Fatorial

#include <stdio.h>
int main(void) {
	long long N, fat = 1;
	scanf("%ld", &N);

	for (int i = 1; i <= N; i++){
		fat *= i;
	}

	printf("%ld", fat);

	return 0;
}
