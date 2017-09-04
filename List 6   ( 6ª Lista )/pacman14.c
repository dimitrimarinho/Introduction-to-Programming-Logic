#include<stdio.h>
int main(void){

	int N, food = 0, foodm = 0;
	scanf("%d", &N);
	char t[N][N];
	char c;
	for (int i=0; i < N; i++){
		for (int j=0; j < N; j++){
			scanf(" %c", &c);			
			t[i][j] = c;			
		}
	}
	for (int i=0; i < N; i++){
		if (i % 2 == 0){
			for (int j=0; j < N; j++){
				if (t[i][j] == 'o'){
					food++;
					if (food >= foodm){
						foodm = food;
					}
				}
				else if	 (t[i][j] == 'A'){
					food = 0;
				}
			}
		}
		else{
			for (int j=N-1; j >= 0; j--){
				if (t[i][j] == 'o'){
					food++;
					if (food >= foodm){
						foodm = food;
					}
				}
				else if	 (t[i][j] == 'A'){
					food = 0;
				}
			}
		}	
	}
	printf("%d\n", foodm);
	return 0;
}
