// Link of the problem (language PT-BR): http://br.spoj.com/problems/MINADO12/
// (Name of the problem) MINADO12 - Campo minado

#include<stdio.h>
int main(void){

	int N, m, C[50]={};
	scanf("%d", &N);
	for (int i = 0 ; i < N ; i++){

		scanf("%d", &m);
		if (m == 1){
			C[i-1]+=1;
			C[i]+=1;
			C[i+1]+=1;
		}
	}
	for (int i = 0 ; i < N ; i++){
		printf("%d\n", C[i]);
	}
	
}
