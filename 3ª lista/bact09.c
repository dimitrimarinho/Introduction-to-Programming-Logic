#include<stdio.h>
#include<math.h>
int main(void){

	double N, D, C, max = 0;
	int imem = -50;
	scanf("%lf", &N);
	for (int i = 0; i < N; i++){
		
		scanf("%lf %lf", &D, &C); 

		if ( (C * log10(D)) > max ){
			max = (C * log10(D));
			imem = i;
		}
	}

	printf("%d\n", imem);

}

