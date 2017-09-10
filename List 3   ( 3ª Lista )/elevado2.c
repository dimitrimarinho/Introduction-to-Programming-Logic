// Link of the problem (language PT-BR): http://br.spoj.com/problems/ELEVADO2/
// (Name of the problem) ELEVADO2 - Elevador

#include<stdio.h>
int main(void){
      int N, C, S, E, temp=0, exc=0;
      scanf("%d%d", &N, &C);
      for (int i = 0; i < N ; i++){
           scanf("%d%d", &S, &E);
	         temp += (-S) + E;
           if (temp > C){
		           exc = C + 1;
	         }
      }
      if (exc > C){
         printf("S\n");
      }
      else if (exc == 0) {
          printf("N\n");
      }
}
