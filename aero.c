// http://br.spoj.com/problems/AERO/

#include<stdio.h>
int main(void){

	int A, V, X , Y, test = 0;
	scanf("%d%d", &A, &V);
	int fluxo[101], m[101]; 
	
	for (int i = 0; i <= 101; i++){
		fluxo[i] = 0;
		m[i] = 0;
	}
	
	while(A != 0 && V!= 0){
		
		for (int i = 0; i < V; i++){
		
			scanf("%d %d", &X, &Y);
			fluxo[X] += 1;
			fluxo[Y] += 1;
		}
		for (int i = 1; i <= V; i++){
			
			if (fluxo[i] >= fluxo[i+1]){
	  			m[i] = fluxo[i];
	  		}	  			
					
		}
		
		printf("Teste %d\n", ++test);
		
		for (int i = 1; i <= V; i++){
			
			if (m[i] == fluxo[i]){
				printf("%d ", m);
			}
		}
		
					
		scanf("%d%d", &A, &V);
		
	}






}