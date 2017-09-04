#include <stdio.h>

int main(void) {
	long long N, fat = 1;
	scanf("%ld", &N);
	for (int i = 1; i <= N; i++){
		fat *= i;
	
	}
	printf("%ld", fat);
	// your code here

	return 0;
}
