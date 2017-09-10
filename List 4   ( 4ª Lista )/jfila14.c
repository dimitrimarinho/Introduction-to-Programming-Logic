// Link of the problem (language PT-BR): http://br.spoj.com/problems/JFILA14/
// (Name of the problem) JFILA14 - Fila

#include<stdio.h>
int main (void){
       int N, n0, M, m0;
       scanf("%d", &N);
       int f[N];
       for (int i = 0; i < N ; i++){
             scanf("%d", &n0);
             f[i] = n0;
        }
        scanf("%d", &M);
        int o[M];
        for (int i = 0; i < M; i++){
              scanf("%d", &m0);
              o[i] = m0;
         }
         for (int r = 0; r < N; r++){
              for (int j = 0; j < M ; j++){
                   if(f[r] == o[j]){
                        f[r] = -1;
                   }
               }
               if (f[r] != -1){
                    printf("%d ", f[r]);
               }
          }
}
