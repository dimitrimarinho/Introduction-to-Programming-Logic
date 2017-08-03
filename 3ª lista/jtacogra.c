#include<stdio.h>
int main(void){

	int N, T, V, d = 0;
	scanf("%d", &N);
	for (int i = 0 ; i < N; i++){
		
		scanf("%d%d", &T, &V);
		d+= (T * V);
		
	}
		printf("%d\n", d);

}
