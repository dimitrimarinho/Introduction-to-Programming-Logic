// Selection Sort

#include<stdio.h>
int main(void){

      int N, M, swap, swap2, ouro, prata, bronze, c , d, position, position2;
      scanf("%d%d", &N, &M);  
      int pais[2][N];

     for (int i = 0; i < 2; i++){
	for (int j = 0; j < N; j++){
     		pais[i][j] = -1;
	}
      }

     for (int medals = 0; medals < M; medals++){
          scanf("%d%d%d", &ouro, &prata, &bronze);
          pais[0][ouro-1]+=1;
          pais[0][prata-1]+=1;
          pais[0][bronze-1]+=1;
     }

     for (int p = 0; p < N; p++){
          pais[1][p] = p+1;
	  // printf("%d", pais[1][p]);
     }
     
     for (c = 0; c < N-1; c++){
           position = c;
           position2 = c;
           for (d = c + 1; d < N; d++){
             if (pais[0][position] < pais[0][d]){
               position = d;
               position2 = d;
             }
           }
         if (position != c){
             swap = pais[0][c];
	     swap2 = pais[1][c];
             pais[0][c] = pais[0][position];
             pais[1][c] = pais[1][position2];
             pais[0][position] = swap;
             pais[1][position2] = swap2;
          }
      }
      
      for (int i = 0; i < N; i++){
            printf("%d ", &pais[1][i]);
      }

      printf("\n");	

}
