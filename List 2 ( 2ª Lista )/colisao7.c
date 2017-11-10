// Link of the problem (language PT-BR): http://br.spoj.com/problems/COLISAO7/
// (Name of the problem) COLISAO7 - Detectando Colisões

#include<stdio.h>
int main(void){

  int x0, y0, x1, y1, Ax0, By0, Ax1, By1;
  scanf("%d%d%d%d%d%d%d%d", &x0, &y0, &x1, &y1, &Ax0, &By0, &Ax1, &By1);
  if ((Ax1 < x0) || (Ax0 > x1))
    printf("0\n");
  else if ((By1 < y0) || (By0 > y1))
    printf("0\n");
  else
    printf("1\n");

}
