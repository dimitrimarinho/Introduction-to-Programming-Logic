// Selection Sort

#include<stdio.h>
int main(void){

      int N, M, swap, swap2, ouro, prata, bronze, c , d, position, position2;
      scanf("%d%d", &N, &M);  
      int pais[N][2];

     for (int i = 0; i < N; i++){
        for (int j = 0; j < 2; j++){
            pais[i][j] = 0;
        }
     }

     for (int medals = 0; medals < M; medals++){
          scanf("%d%d%d", &ouro, &prata, &bronze);
          pais[ouro-1][0]+=1;
          pais[prata-1][0]+=1;
          pais[bronze-1][0]+=1;
     }

     for (int i = 0; i < N; i++){
          pais[i][1] = i+1;
     }
     
     	for (c = 0; c < N-1; c++){
            position = c;
            position2 = c;
            for (d = c + 1; d < N; d++){
              if (pais[position][0] < pais[d][0]){
                position = d;
                position2 = d;
              }
            }
          if (position != c){
              swap = pais[c][0];
              swap2 = pais[c][1];
              pais[c][0] = pais[position][0];
              pais[c][1] = pais[position2][1];
              pais[position][0] = swap;
              pais[position2][1] = swap2;
           }
	    }
      
      for (int i = 0; i < N; i++){
            printf("%d", &pais[i][1]);
      }

}
