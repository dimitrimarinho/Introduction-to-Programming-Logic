// Link of the problem (language PT-BR): http://br.spoj.com/problems/CORR11/
// (Name of the problem) CORR11 - Corrida
// Insertion Sort

#include<stdio.h>
int main(){

	int d, swap;
	long N, M, volta;
	scanf("%ld%ld", &N, &M);
	long pos[N], ident[N];
	for (int clear = 0;  clear < N; clear++){
		pos[clear] = 0;
		ident[clear] = 0;
	}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			scanf("%ld", &volta);
			pos[i] += volta;
			ident[i] += volta;
		}
	}
	for (int c = 1; c <= N-1; c++){
		d = c;
		while (d>0 && pos[d] < pos[d-1]){
			swap = pos[d];
			pos[d] = pos[d-1];
			pos[d-1] = swap;
			d--;
		}
	}
	for (int print = 0; print < 3; print++){
		for (int looking = 0; looking < N; looking++){
			if (pos[print] == ident[looking]){
				printf("%d\n", ++looking);
			}
		}
	}
}
