#include<stdio.h>
#include<string.h>
int main(void){
	int N, a = 0;
	scanf("%d", &N);
	char ni[N], gab[N];
	scanf("%s", ni);
	scanf("%s", gab);
	for (int i = 0; i < N; i++){
		if (ni[i] == gab[i]){
			a++;
		}
	}
	printf("%d\n", a);
	return 0;

// Submeter no C++ 4.3.2
}
