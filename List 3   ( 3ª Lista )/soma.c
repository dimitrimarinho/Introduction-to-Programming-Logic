// Link of the problem (language PT-BR): http://br.spoj.com/problems/SOMA/
// (Name of the problem) SOMA - Soma

#include<stdio.h>
int main(void){
      int N, r=0, p;
      scanf("%d", &N);
      for ( int i=0; i < N; i++){
              scanf("%d", &p);
               r+= p;
       }
      printf("%d", r);
      return 0;
}
