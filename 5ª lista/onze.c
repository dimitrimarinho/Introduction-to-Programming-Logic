#include<stdio.h>
#include<string.h>
int main(void){

	int s1 = 0, s2 = 0, i, j;
	char onze[1001];
	scanf("%s", onze);
	for(;;){
		if (onze[0]=='0' && onze[1]=='\0'){
			break;
		}
		// printf("%d", (int)strlen(onze));
		for (i = (int)strlen(onze)-1, j = (int)strlen(onze)-2; i > 0 ; i=i-2, j=j-2){
			

			s1 += onze[i] - '0';
			// printf("\n s1 é %d \n", s1);
			s2 += onze[j] - '0';
			// printf("\n s2 é %d \n", s2);
		}
			if (strlen(onze) % 2 != 0){
				s1 += onze[i] - '0';
				// printf("\n s1 é %d \n", s1);
			}
		if (strlen(onze) == 1){
			printf("%s is not a multiple of 11.\n", onze);
		}		
		else if ((s1-s2) >= 0){
			if ((s1-s2)%11 == 0){
				printf("%s is a multiple of 11.\n", onze);
			}
			else{
				printf("%s is not a multiple of 11.\n", onze);
			}
		}
		else {
			if ((s2-s1)%11 == 0){
				printf("%s is a multiple of 11.\n", onze);
			}
			else{
				printf("%s is not a multiple of 11.\n", onze);
			}
		}
	s1 = 0;
	s2 = 0;
	scanf("%s", onze);
	}
	return 0;
}
