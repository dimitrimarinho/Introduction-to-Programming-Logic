// This problem is not available in the SPOJ. It was made available by a PDF in CDMOJ.

#include<stdio.h>
int main(void){

	int N;
	scanf("%d", &N);
	for (int i=1;  i <= N; i++){
		if(i % 2 == 1){
			printf("THUMS THUMS THUMS\n");
		}
		else{
			printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
		}
	}
}
