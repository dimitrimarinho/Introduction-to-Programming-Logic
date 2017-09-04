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
