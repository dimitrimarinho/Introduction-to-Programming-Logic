// Link of the problem (language PT-BR): http://br.spoj.com/problems/DIST13/
// (Name of the problem) DIST13 - Distância de Manhattan

#include<stdio.h>
int main(void){

	int Xm, Ym, Xr, Yr, distX, distY;
	scanf("%d%d%d%d", &Xm, &Ym, &Xr, &Yr);
	if (Xr > Xm)
		distX = Xr - Xm;
	else
		distX = Xm - Xr;
	if (Yr > Ym)
		distY = Yr - Ym;
	else
		distY = Ym - Yr;
	printf("%d\n", (distX + distY));

}