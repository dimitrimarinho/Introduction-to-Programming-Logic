// Link of the problem (language PT-BR): http://br.spoj.com/problems/JOAOMG/
// (Name of the problem) JOAOMG - João e o Pé de Feijão

#include<stdio.h>
int main(void){

	int nK;
	scanf("%d", &nK);
	while (nK != 0){

				long long K = nK * nK, div = 10;
				char what = 'N';
				for (int i = 0; i <= 10; i++, div*=10){
					if (nK ==10 || nK ==100 || nK ==1000 || nK ==10000)
						break;
					int n1 = K/div , n2 = K%div;
					if ((n1 + n2) == nK){
						what = 'S';
						break;
					}
				}
				printf("%d: %c\n", nK, what);
				what = 'N';
				scanf("%d", &nK);
	}

}
