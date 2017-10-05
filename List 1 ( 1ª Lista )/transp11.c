// Link of the problem (language PT-BR): http://br.spoj.com/problems/TRANSP11/
// (Name of the problem) TRANSP11 - Transporte

#include<stdio.h>
int main(void){

	int A, B, C, X, Y, Z;
	scanf("%d%d%d%d%d%d",&A,&B,&C,&X,&Y,&Z);
	if ((A > X) || (B > Y) || (C > Z)){
		printf("%d\n", 0);
	}
	else{
		printf("%d\n", ((X/A)*(Y/B)*(Z/C)));
	}
	return 0;

}