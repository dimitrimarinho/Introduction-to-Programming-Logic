#include<stdio.h>
int main(void){

	int N, a, A[100] = {}, m = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%d", &a);
		A[a] += 1;
	}
	for (int j = 0; j < 100; j++){
		if (A[j] >= A[j+1]){
			m = A[j];
		}
		else if (A[j] <= A[j+1]){
			m = A[j+1];
		}
	}
	printf("%d\n", m);
	
}
