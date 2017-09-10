// Link of the problem (language PT-BR): http://br.spoj.com/problems/TELESCO2/
// (Name of the problem) TELESCO2 - Telescópio

#include<stdio.h>
int main(void){

	int A, N, F, vis = 0;
	scanf("%d", &A);
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &F);
		if (A * F >= 40000000){
			vis+=1;
		}
	}
	printf("%d\n", vis);

}
