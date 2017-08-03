#include<stdio.h>
int main (void){

	int N, M, A, K; //  N caracteres, entre eles no mínimo M devem ser letras minúsculas, A devem ser letras maiúsculas, e K devem ser números.
	int n = 0, m = 0, a = 0, k = 0;
	char senha[1000];
	scanf("%d%d%d%d", &N, &M, &A, &K);
	scanf("%s", senha);
	for (int i = 0 ; senha[i] != '\0' ; i++){
		n = i;
		if (senha[i] >= 97 && senha[i] <= 122){
			m += 1;
		} 
		else if (senha[i] >= 65 && senha[i] <= 90){
			a += 1;
		}  
		else if (senha[i] >= 48 && senha[i] <= 57){
			k += 1;
		}  
	}
	if (n >= N && m >= M && a >= A && k >= K) {
		printf("Ok =/\n");
	}
	else {
		printf("Ufa :)\n");
	}

}
