// Link of the problem (language PT-BR): http://br.spoj.com/problems/TEL8/
// (Name of the problem) TEL8 - Telefone

	#include<stdio.h>
	#include<string.h>
	int main(void){

	char tel[15];
	scanf("%s", tel);
	for (int i = 0 ; i < strlen(tel) ; i++){
		if (tel[i] == 'A' || tel[i] == 'B'|| tel[i] == 'C'){
			tel[i] = '2';
		}
		else if (tel[i] == 'D'|| tel[i] == 'E'|| tel[i] == 'F'){
			tel[i] = '3';
		}
		else if (tel[i] == 'G'|| tel[i] == 'H'|| tel[i] == 'I'){
			tel[i] = '4';
		}
		else if (tel[i] == 'J'|| tel[i] == 'K'|| tel[i] == 'L'){
			tel[i] = '5';
		}
		else if (tel[i] == 'M'|| tel[i] == 'N'|| tel[i] == 'O'){
			tel[i] = '6';
		}
		else if (tel[i] == 'P'|| tel[i] == 'Q'|| tel[i] == 'R'|| tel[i] == 'S'){
			tel[i] = '7';
		}
		else if (tel[i] == 'T'|| tel[i] == 'U'|| tel[i] == 'V'){
			tel[i] = '8';
		}
		else if (tel[i] == 'W'|| tel[i] == 'X'|| tel[i] == 'Y'|| tel[i] == 'Z'){
			tel[i] = '9';
		}

	}
	printf("%s\n", tel);
	return 0;

	}
