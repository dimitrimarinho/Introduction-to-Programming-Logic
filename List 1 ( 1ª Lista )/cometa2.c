// Link of the problem (language PT-BR): http://br.spoj.com/problems/COMETA2/
// (Name of the problem) COMETA2 - Cometa

#include<stdio.h>
int main(void){

	int A;	
	scanf("%d", &A);
	printf("%d\n", (76-((A-1986)%76))+A);

}