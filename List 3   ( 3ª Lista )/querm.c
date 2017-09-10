// Link of the problem (language PT-BR): http://br.spoj.com/problems/QUERM/
// (Name of the problem) QUERM - Quermesse

#include<stdio.h>
int main(void){

	int N, ing, R, test = 0;
	scanf("%d", &N);
	while(N != 0){

		test++;
		for (int i = 1; i <= N; i++){
 			scanf("%d", &ing);
			if (ing == i){
				R = i;
				// printf(" \nR é %d\n", R);
			}
		}

		printf("\nTeste %d\n", test);
		printf("%d", R, "\n");
		scanf("%d", &N);

	}
}
