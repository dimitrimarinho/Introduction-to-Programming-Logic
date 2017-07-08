#include<stdio.h>
int main(void){

	int N, M ,S;
	scanf("%d%d%d", &N, &M , &S);
	while ( N!=0 && M!=0 && S!=0){
		char cel[N][M], com;
		int a = 0, b = 0, comid = 0;
		for (int i = 0; i < N; i++){
			for (int j = 0; j < M; j++){
				scanf(" %c", &cel[i][j]);
				if (cel[i][j] == 'N' || cel[i][j] == 'S' || cel[i][j] == 'L' || cel[i][j] == 'O'){
					a = i;
					b = j;
				}				
			}	
		}
		for (int k = 0; k < S; k++){
			scanf(" %c", &com);
			if (com == 'D'){
				if (cel[a][b] == 'N'){
					cel[a][b] = 'L';
				}
				else if (cel[a][b] == 'S'){	
					cel[a][b] = 'O';
				}
				else if (cel[a][b] == 'L'){
					cel[a][b] = 'S';
				}
				else if (cel[a][b] == 'O'){
					cel[a][b] = 'N';
				}
			}
			else if (com =='E'){
				if (cel[a][b] == 'N'){
					cel[a][b] =  'O';
				}
				else if (cel[a][b] == 'S'){	
					cel[a][b] = 'L';
				}
				else if (cel[a][b] == 'L'){
					cel[a][b] = 'N';
				}
				else if (cel[a][b] == 'O'){
					cel[a][b] = 'S';
				}
			}
			else if (com == 'F'){
				if (cel[a][b] == 'N'){
					if ((cel[a-1][b] ==  '*') && (a-1 >= 0)){
						comid+=1;
						a = a-1;
						// printf("%d%d", a, b);
						cel[a][b] = 'N';
					}
					else if ((cel[a-1][b] == '.') && (a-1 >= 0)){
						a = a-1;
						// printf("%d%d", a, b);
						cel[a][b] = 'N';
					}
					else if (cel[a-1][b] == '#'){
						a+=0;
						b+=0;
						// printf("%d%d", a, b);
						cel[a][b] = 'N';
					}
				}
				else if (cel[a][b] == 'S'){	
					if ((cel[a+1][b] ==  '*') && (a+1 <= N)){
						comid+=1;
						a = a+1;
						// printf("%d%d", a, b);
						cel[a][b] = 'S';
					}
					else if ((cel[a+1][b] == '.') && (a+1 <= N)){
						a = a+1;
						// printf("%d%d", a, b);
						cel[a][b] = 'S';
					}
					else if (cel[a+1][b] == '#'){
						a+=0;
						b+=0;
						// printf("%d%d", a, b);
						cel[a][b] = 'S';
					}
				}
				else if ((cel[a][b] == 'L') && (b+1 <= M)){
					if (cel[a][b+1] ==  '*'){
						comid+=1;
						b = b+1;
						// printf("%d%d", a, b);
						cel[a][b] = 'L';
					}
					else if ((cel[a][b+1] == '.') && (b+1 <= M)){
						b = b+1;
						// printf("%d%d", a, b);
						cel[a][b] = 'L';
					}
					else if (cel[a][b+1] == '#'){
						a+=0;
						b+=0;
						// printf("%d%d", a, b);
						cel[a][b] = 'L';
					}
				}
				else if ((cel[a][b] == 'O') && (b-1 >= 0)){
					if (cel[a][b-1] ==  '*'){
						comid+=1;
						b = b-1;
						// printf("%d%d", a, b);
						cel[a][b] = 'O';
					}
					else if ((cel[a][b-1] == '.') && (b-1 >= 0)){
						b = b-1;
						// printf("%d%d", a, b);
						cel[a][b] = 'O';
					}
					else if (cel[a][b-1] == '#'){
						a+=0;
						b+=0;
						// printf("%d%d", a, b);
						cel[a][b] = 'O';
					}
				}
			}
		}
		printf("%d\n", comid);
		scanf("%d%d%d", &N, &M, &S);
	}
}
