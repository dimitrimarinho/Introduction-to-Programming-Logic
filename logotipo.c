#include<stdio.h>
int main(void){
	
	int X, Y, yi, K, M, N, test = 0, r = 0, flag = 1;
	scanf("%d%d", &X, &Y);
	while (X != 0 && Y != 0){
		int log[X][Y];
		for (int i=0; i < X; i++){
			for (int j=0; j < Y; j++){
				scanf("%d", &yi);
				log[i][j] = yi;
			}
		}
		scanf ("%d%d%d", &K, &M, &N);
		int TV[M][N];
		for (int i = 0;  i < K; i++){
			for (int j = 0; j < M ; j++){
				for (int k = 0;  k < N; k++){
					scanf("%d", &yi);
					TV[j][k] = yi;
				}
			}
		}
		for (int l = 0; l < M ; l++){
			for (int k = 0;  k < N; k++){
				if (TV[l][k] == log[0][0]){
					flag = 1;
					for (int i = 0 ; i < X; i++){
						for (int j = 0 ; j < Y; j++){
							if (TV[l+i][k+j] != log[i][j]){
								flag = 0;
							}
						}
					}
				}
				if (flag == 1){
					r++;
				}
			}
		}
		printf("\nLogotipo %d\n", ++test);
		printf("%d\n", r);
		r = 0;
		scanf("%d%d", &X, &Y);	
	}
	return 0;
}
