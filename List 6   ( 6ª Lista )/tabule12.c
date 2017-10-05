// Link of the problem (language PT-BR): http://br.spoj.com/problems/TABULE12/
// (Name of the problem) TABULE12 - O Tabuleiro Esburacado

#include<stdio.h>
int main(void){

	int N, mi, x = 4, y = 4, save;
	int board[8][8] = {}, atual;
	board[2][2] = -1;
	board[3][5] = -1;
	board[4][1] = -1;
	board[4][2] = -1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		save = i;
		scanf("%d", &mi);
		if (mi == 1){
			x = x-2;
			y = y+1;
			atual = board[x][y];
			if (atual == -1){
				break;
			}

		}
		else if (mi == 2){
			x = x-1;
			y = y+2;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}
		else if (mi == 3){
			x = x+1;
			y = y+2;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}
		else if (mi == 4){
			x = x+2;
			y = y+1;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}
		else if (mi == 5){
			x = x+2;
			y = y-1;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}
		else if (mi == 6){
			x = x+1;
			y = y-2;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}
		else if (mi == 7){
			x = x-1;
			y = y-2;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}
		else if (mi == 8){
			x = x-2;
			y = y-1;
			atual = board[x][y];
			if (atual == -1){
				break;
			}
		}

	}
	printf("%d\n", save+1);

}
