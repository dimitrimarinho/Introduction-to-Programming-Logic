#include<stdio.h>
int main(void){

	int P, R, x, pr, o, jog, res;
	//  A primeira linha de um caso de teste contém dois números inteiros P e R indicando respectivamente a quantidade inicial de participantes (2 <= P <= 100) e quantidade de rodadas da partida (1 <= R <= 100)
	scanf("%d%d", &P, &R);
	int test=0;
	
	while (P != 0 && R != 0){
		int p[P];
	for (int i = 0 ; i < P; i++){
		p[i] = 0;
	}
		for (int i = 0 ; i < P; i++){
			scanf("%d", &x);
			p[i] = x;
		}
		for (int r = 0; r < R; r++){
			scanf("%d%d", &pr, &o);
			
	       for (int j = 0 ; j < P; j++){
		        if (p[j] != -1){
				     scanf("%d", &jog);
				     if (jog != o){
					     p[j] = -1;
				     }
				    if(p[j] != -1){
				       res = p[j];
		           }	
				}
			 }
		}
		printf("\nTeste %d\n", ++test);
		printf("%d\n", res);
		scanf("%d%d", &P, &R);	
	}


}