#include<stdio.h>
int main(void){

	int P, R, x, pr, o, jog;
	//  A primeira linha de um caso de teste contém dois números inteiros P e R indicando respectivamente a quantidade inicial de participantes (2 <= P <= 100) e quantidade de rodadas da partida (1 <= R <= 100)
	scanf("%d%d", &P, &R);
	int p[P];
	int test=0;
	for (int i = 0 ; i < P; i++){
		p[i] = 0;
	}
	while (P != 0 && R != 0){
		for (int i = 0 ; i < P; i++){
			scanf("%d", &x);
			p[i] = x;
		}
		for (int r = 0; r < R; r++){
			scanf("%d%d", &pr, &o);
			for (int j = 0 ; j < pr; j++){
				scanf("%d", &jog);
				if (jog != o){
					p[j] = -1;
				}
			}
		}
		printf("\nTeste %d\n", ++test);
		for (int i = 0; i < P; i++){
			if (p[i] != -1){
				printf("%d\n", p[i]);
			}
		}	
		scanf("%d%d", &P, &R);	
	}
	
	
}
