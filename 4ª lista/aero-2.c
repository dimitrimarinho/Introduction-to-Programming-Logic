#include<stdio.h>
int main(void){

	int A, V, X , Y, m = 0, test = 0;
	scanf("%d%d", &A, &V);
	while (A != 0 && V != 0){
		int aero[101] = {};
		
		for (int i = 0; i < V; i++){
			scanf("%d%d", &X, &Y);
			aero[X]+= 1;
			aero[Y]+= 1;
		}
		for (int i = 0; i <= A; i++){
			if (aero[i] >= m){
				m = aero[i];
			}
		}
		printf("Teste %d\n", ++test);
		for (int i = 0; i <= A; i++){
			//printf("%d", aero[i]);
			if (aero[i] == m){
				printf("%d ", i);
			}
		}
		printf("\n\n");
		scanf("%d%d", &A, &V);
		m = 0;
		
	}
	return 0;
}
