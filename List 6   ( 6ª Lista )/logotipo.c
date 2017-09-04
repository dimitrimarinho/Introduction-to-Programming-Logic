#include<stdio.h>
int main(void){
	
	int X, Y, yi, K, M, N, test = 0, o = 0, flag = 0, l, y, r, z;
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
		while (K > 0){
			K--;
			for (int j = 0; j < M ; j++){
				for (int k = 0;  k < N; k++){
					scanf("%d", &yi);
					TV[j][k] = yi;
					// printf("%d ",TV[j][k]); 
				}
					// printf("\n");
			}
			for (l = 0; l < M ; l++){
				for (y = 0;  y < N; y++){
					flag = 0;
					if (TV[l][y] == log[0][0] && l <= (M-X) &&  y <= (N-Y)){
						// printf("\n");
						for (r = 0 ; r < X; r++){
							 // printf("\n");
							for (z = 0 ; z < Y; z++){
								 // printf("l+r = %d+%d e y+z = %d+%d \n", l,r,y,z);
								 // printf(" %d \n", TV[l+r][y+z]);
								if (TV[(l+r)][(y+z)] == log[r][z]){
									
									flag++;
								}
								else if (TV[(l+r)][(y+z)] != log[r][z]){
									// printf("\n Diferente \n");
									flag = 0;
									break;
								}
							}
						}
						if (flag == (X*Y)){
							o++;
							flag = 0;	
						}
											
					}
					
				}
			}
		}
		printf("Logotipo %d\n", ++test);
		printf("%d\n\n", o);
		scanf("%d%d", &X, &Y);
		o = 0;	
	}
	return 0;
}

