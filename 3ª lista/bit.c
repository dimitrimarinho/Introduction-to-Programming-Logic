#include<stdio.h>
int main(void){

	int V, teste = 0;
	scanf("%d", &V);

	while (V != 0){
	
		int  I = 0, J = 0, K = 0, L = 0;

		I = V/50;
		J = (V - (I * 50) )/10;
		K = (V - ( (I*50) + (J * 10)) )/5;
		L = (V - ( (I*50) + (J * 10) + (K * 5)));

	
		printf("\nTeste %d\n", ++teste);
		printf("%d %d %d %d\n", I, J, K, L);	

		scanf("%d", &V);

	}





}
