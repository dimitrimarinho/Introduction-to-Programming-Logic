#include<stdio.h>
int main(void){

	int P, a = 0, f;
	char wordc[43], word[43];
	scanf("%d", &P);
	for (int i = 0 ; i < P; i++){
		
		scanf("%s", word);
		for (int c = 0 ; word[c] != '\0' ; c++){
			wordc[c] = word[c];
			f = c + 1;			
		}
		for (f; f <= 43; f++){
			if (wordc[f] == '\0'){
				break;
			}
			wordc[f] = '\0';
		}
		if (word[0] >= 'A' && word[0] <= 'Z'){
			word[0]+=32;
		}
		for (int j = 1; word[j] != '\0'; j++){ 
			if (word[j] >= 'A' && word[j] <= 'Z'){
				word[j]+=32;
			}		
			if (word[j-1] >= word[j]){
				a = 100;
				break;
			}
		}
		if (a == 100){
			printf("%s: N", wordc);
			a = 0;
		}
		else {
			printf("%s: O", wordc);
		}
		printf("\n");
	}
}
