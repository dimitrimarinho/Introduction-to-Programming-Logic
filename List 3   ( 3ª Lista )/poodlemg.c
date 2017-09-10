// Link of the problem (language PT-BR): http://br.spoj.com/problems/POODLEMG/
// (Name of the problem) POODLEMG - Poodle

#include <stdio.h>
int main(void) {

	int N, P, pag;
	scanf("%d%d", &N, &P);
	while (N != 0 && P != 0){
			pag = N/P;
			printf("P");
			if ((N%P) != 0){
					pag++;
			}
			if (pag <= 6){
				printf("oo");
			}
			else if (pag > 6 && pag < 20){
				for (int i = 0; i < (pag - 4) ; i++){
					printf("o");
				}

			}
			else if (pag >= 20) {
				printf("oooooooooooooooo");
			}
			printf("dle\n");
			pag = 0;
		scanf("%d%d", &N, &P);
	}
	return 0;

}
