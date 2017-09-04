#include<stdio.h>
void bubble_sort(long int[], long int);
int main(){

	long int N, M;
	scanf("%ld%ld", &N, &M);
	long int score[N];
	for (int i=0; i<N; i++){
		scanf("%ld", &score[i]);
	}
	bubble_sort(score, N);
	for (int print = 0; print < M; print++){
		printf("%ld\n", score[print]);
	}
}

void bubble_sort(long int score[], long int N){

	long swap;
	for (int i = 0; i < (N-1); i++){
		for (int j = 0; j < (N-i-1); j++){
			if (score[j] < score[j+1]){
				/*Swapping*/
				swap = score[j];
				score[j] = score[j+1];
				score[j+1] = swap;
			}
		}
	}
}

	
