// Link of the problem (language PT-BR): http://br.spoj.com/problems/TAPETE14/
// (Name of the problem) TAPETE14 - Tapetes

#include<stdio.h>
int main(void){

  long long L, N, maxarea;
  scanf("%lli%lli", &L, &N);
  maxarea = (L-(N-1)) * (L-(N-1));
  printf("%lli\n", maxarea + N-1);

}
